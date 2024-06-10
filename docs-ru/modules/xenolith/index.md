Title: Графика и вычисления

# Графика и вычисления

Основной модуль графического API: `xenolith_core`. Единственный действующий на текущий момент графический API: Vulkan (`xenolith_backend_vk`).

Для работы необходимы установленные в системе заголовки Vulkan или Vulkan SDK. Для сборки шейдеров необходимы `glslangValidator`, `spirv-link`.

Далее описсан низкоуровневый процесс запуска графического API. Обычно, приложения используют модуль приложения `xenolith_application`, в которых этот процесс уже реализован.

Интерфейс построен по заведомо асинхронной модели и активно использует потоки. Однопоточный режим работы не предусмотрен.

## Инициализация API

Для работы необходим объект `xenolith::core::Instance`. Для Vulkan:

```cpp

#include "XLVkPlatform.h"

using namespace stappler::xenolith;

auto instance = vk::platform::createInstance([&] (vk::platform::VulkanInstanceData &data, const vk::platform::VulkanInstanceInfo &info) {
	data.applicationName = "app.name";
	data.applicationVersion = "1.0.0";
	
	// включение слоёв и расширений из info

	return true;
});
```

## Создание графического цикла

Все вычислительные и графические операции выполняются изолированно в графическом цикле (`xenolith::core::Loop`).

```cpp
#include "XLVkInstance.h"

using namespace stappler::xenolith;

// контроль устройства, функций и расширений
auto data = Rc<vk::LoopData>::alloc();
data->deviceSupportCallback = [] (const vk::DeviceInfo &dev) {
	return dev.requiredExtensionsExists && dev.requiredFeaturesExists;
};
data->deviceExtensionsCallback = [] (const vk::DeviceInfo &dev) -> xenolith::Vector<StringView> {
	// дополнительные расширения
	return xenolith::Vector<StringView>();
};
data->deviceFeaturesCallback = [] (const vk::DeviceInfo &dev) -> vk::DeviceInfo::Features {
	// дополнительные функции
	return vk::DeviceInfo::Features();
};

// создаём цикл
core::LoopInfo loopInfo;
loopInfo.platformData = data;
auto loop = instance->makeLoop(move(loopInfo));

// инициализация цикла ничинается сразу же в другом потоке
// разумно провести инициализацию других компонентов, прежде, чем дожидаться окончательного запуска цикла
// это может значительно ускорить запуск приложения

// дожидаемся запуска цикла
loop->waitRinning();
// после этого цикл полностью работоспособен
```

## Очереди исполнения

Для выполнения реальных задач необходима очередь исполнения `core::Queue`, это реализация концепции Render Graph в Xenolith.

Структура очереди отталкивается от элемента вложения `core::Attachment`, представляющего буфер либо изображение, над которым происходит работа. Для определения порядка работы используется параметр `core::RenderOrdering`, чем он ниже, тем раньше будет выполнен проход. Упоряддочивается выполнение только тех проходов, что завязаны на одни и те же вложения, в остальном порядок будет определяться порядком поступоления данных для работы.

Система НЕ линеаризует очередь, в отличии от классических систем RenderGraph, поскольку предполагает, что в асинхронной системе не определён порядок, в котором могут поступить входящие данные. То есть, проходы запускаются при первой возможности, как только данные для них готовы.

Общая структура:
* `Queue`
  * `Attachment` - очередь содержит одно и более вложений
    * `AttachmentPassData` - дескриптор вложения связывает вложение и проход
      * `AttachmentSubpassData` - ссылка на дескриптор вложения для подпрохода, создаётся при добавлении дескриптора к подпроходу
  * `Program` - исполняемая на устройстве программа
  * `Resource` - ресурсные данные офереди
    * `Image` - статические изображения
    * `Buffer` - статические буферы
  * `QueuePass` - проход рендеринга/вычисления/трансфера
    * `AttachmentPassData` - привязанные к проходу вложения
    * `DescriptorLayout` - варианты укладки дескрипторов для пайплайнов
      * `DescriptorSet` - набор дескрипторов
        * `Descriptor` - отдельный дескриптор, связанный с вложением (AttachmentPassData)
    * `Subpass` - подпроход, выполняющий реальную работу
      * `AttachmentSubpassData` - связанные с подпроходом вложения
      * `GraphicPipeline` - графические пайплайны, привязаны к укладке дескрипторов
      * `ComputePipeline` - вычислительные пайплайны, привязаны к укладке дескрипторов

Классы `Attachment` и `QueuePass` используются в качестве базовых при конкретной реализации вложений и проходов.

В очереди подробно указываются правила переходов и синхронизаций, механизм в целом дублирует аналогичный из Vulkan (https://gpuopen.com/learn/vulkan-barriers-explained/).

Очередь не делает больше, чем доступно в используемом графическом API. То есть, несмотря на то, что в системе существует вычислительный и трансферный абстрактные варианты прохода, поскольку их нет в Vulkan - автоматические синхронизации для них не выполняются, их необходимо выполнить вручную командами.

Описанный интерфейс не зависит от платформы и типа приложения. Это базовые строительные блоки для создания приложений, использующих графический API, которые можно использовать и из командной строки, и на сервере, и в графическом приложении.

Пример определения очереди:

```cpp
struct NoiseData {
	uint32_t seedX;
	uint32_t seedY;
	float densityX;
	float densityY;
};

struct NoiseDataInput : core::AttachmentInputData {
	NoiseData data;
};

class NoiseQueue : public core::Queue {
public:
	virtual ~NoiseQueue() = default;

	bool init();

	const AttachmentData *getDataAttachment() const { return _dataAttachment; }
	const AttachmentData *getImageAttachment() const { return _imageAttachment; }

protected:
	const AttachmentData *_dataAttachment = nullptr;
	const AttachmentData *_imageAttachment = nullptr;
};

class NoisePass : public vk::QueuePass {
public:
	virtual ~NoisePass() = default;

	virtual bool init(Queue::Builder &queueBuilder, QueuePassBuilder &, const AttachmentData *, const AttachmentData *);

	const AttachmentData *getDataAttachment() const { return _dataAttachment; }
	const AttachmentData *getImageAttachment() const { return _imageAttachment; }

protected:
	using QueuePass::init;

	const AttachmentData *_dataAttachment = nullptr;
	const AttachmentData *_imageAttachment = nullptr;
};

bool NoiseQueue::init() {
	using namespace core;
	Queue::Builder builder("Noise");

	// входящий буфер
	auto dataAttachment = builder.addAttachemnt("NoiseDataAttachment", [&] (AttachmentBuilder &attachmentBuilder) -> Rc<Attachment> {
		// помечаем как ожидающий ввода
		attachmentBuilder.defineAsInput();

		auto a = Rc<vk::BufferAttachment>::create(attachmentBuilder, core::BufferInfo(
			core::BufferUsage::UniformBuffer, sizeof(NoiseData)
		));

		// проверка входящих данных на валидность
		a->setValidateInputCallback([] (const Attachment &, const Rc<AttachmentInputData> &data) {
			return dynamic_cast<NoiseDataInput *>(data.get()) != nullptr;
		});

		// создание интерфейса кадра
		a->setFrameHandleCallback([] (Attachment &a, const FrameQueue &queue) {
			auto h = Rc<vk::BufferAttachmentHandle>::create(a, queue);
			
			// обработка входящих данных
			h->setInputCallback([] (AttachmentHandle &handle, FrameQueue &queue, Rc<AttachmentInputData> &&input, Function<void(bool)> &&cb) {
				auto a = static_cast<vk::BufferAttachment *>(handle.getAttachment().get());
				auto d = static_cast<NoiseDataInput *>(input.get());
				auto devFrame = static_cast<vk::DeviceFrameHandle *>(queue.getFrame().get());
				auto b = static_cast<vk::BufferAttachmentHandle *>(&handle);

				// аллоцируем кадровый буфер
				auto buf = devFrame->getMemPool(devFrame)->spawn(vk::AllocationUsage::DeviceLocalHostVisible, a->getInfo());

				// записываем в него данные
				buf->map([&] (uint8_t *data, VkDeviceSize) {
					memcpy(data, &d->data, sizeof(NoiseData));
				});

				// добавляет новый буфер в дескрипторы для доступа из шейдера
				b->addBufferView(buf);

				cb(true);
			});
			return h;
		});
		return a;
	});

	// исходящее изображение
	auto imageAttachment = builder.addAttachemnt("NoiseImageAttachment", [&] (AttachmentBuilder &attachmentBuilder) -> Rc<Attachment> {
		// помечаем как исходящий (его можно захватыватьн а выходе из кадра)
		attachmentBuilder.defineAsOutput();
		return Rc<vk::ImageAttachment>::create(attachmentBuilder,
			ImageInfo(Extent2(1024, 768), ImageUsage::Storage | ImageUsage::TransferSrc, ImageTiling::Optimal, PassType::Compute, ImageFormat::R8G8B8A8_UNORM),
			ImageAttachment::AttachmentInfo{
				.initialLayout = AttachmentLayout::Undefined,
				.finalLayout = AttachmentLayout::General,
				.clearOnLoad = true,
				.clearColor = Color4F(0.0f, 0.0f, 0.0f, 0.0f)}
		);
	});

	// добавляем вычислительный проход
	builder.addPass("NoisePass", PassType::Compute, RenderOrdering(0), [&] (QueuePassBuilder &passBuilder) -> Rc<core::QueuePass> {
		return Rc<NoisePass>::create(builder, passBuilder, dataAttachment, imageAttachment);
	});

	if (core::Queue::init(move(builder))) {
		_dataAttachment = dataAttachment;
		_imageAttachment = imageAttachment;
		return true;
	}
	return false;
}

bool NoisePass::init(Queue::Builder &queueBuilder, QueuePassBuilder &builder, const AttachmentData *data, const AttachmentData *image) {
	using namespace core;

	// связываем изображение с проходом
	auto passImage = builder.addAttachment(image, [] (AttachmentPassBuilder &builder) {
		builder.setDependency(AttachmentDependencyInfo{
			PipelineStage::ComputeShader, AccessType::ShaderWrite,
			PipelineStage::ComputeShader, AccessType::ShaderWrite,
			FrameRenderPassState::Complete,
		});
	});

	// добавляем укладку дескрипторов
	auto layout = builder.addDescriptorLayout([&] (PipelineLayoutBuilder &layoutBuilder) {
		layoutBuilder.addSet([&] (DescriptorSetBuilder &setBuilder) {
			setBuilder.addDescriptor(builder.addAttachment(data));
			setBuilder.addDescriptor(passImage, DescriptorType::StorageImage, AttachmentLayout::General);
		});
	});

	// добавляем рабочий подпроход
	builder.addSubpass([&] (SubpassBuilder &subpassBuilder) {
		// добавляем шейдер (в очередь) и пайплайн (в подпроход)
		subpassBuilder.addComputePipeline("NoisePipeline", layout,
				queueBuilder.addProgramByRef("NoisePipelineComp", NoiseComp));

		// добавляем рабочую функцию
		subpassBuilder.setCommandsCallback([&] (const SubpassData &subpass, FrameQueue &frame, CommandBuffer &commands) {
			// получаем конкретные реализции обектов из абстрактных, представляемых очередью
			auto &buf = static_cast<vk::CommandBuffer &>(commands);
			
			// получаем данные вложения для текущего кадра и извлекаем изображение
			auto imageAttachment = static_cast<vk::ImageAttachmentHandle *>(frame.getAttachment(_imageAttachment)->handle.get());
			auto image = (vk::Image *)imageAttachment->getImage()->getImage().get();
			
			// запрощенный размер изображения определяем как размер текущего кадра
			auto extent = frame.getFrame()->getFrameConstraints().extent;

			// синхронизируем изображение (обязательный шаг, поскольку система использует агрессивное кеширование
			// и это, вероятно, то же самое изображение, что было в предыдущем кадре
			vk::ImageMemoryBarrier inImageBarriers[] = {
				vk::ImageMemoryBarrier(image, 0, VK_ACCESS_SHADER_WRITE_BIT, VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_GENERAL)
			};

			buf.cmdPipelineBarrier(VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT, 0,
					inImageBarriers);

			// связываем дескрипторы (они заполняются автоматически)
			buf.cmdBindDescriptorSets(static_cast<vk::RenderPass *>(subpass.pass->impl.get()), 0);

			// получаем и связываем пайплайн
			auto pipeline = (vk::ComputePipeline *)subpass.computePipelines.get("NoisePipeline")->pipeline.get();

			buf.cmdBindPipeline(pipeline);

			// запускаем вычисления
			buf.cmdDispatch((extent.width - 1) / pipeline->getLocalX() + 1, (extent.height - 1) / pipeline->getLocalY() + 1);
		});
	});

	_dataAttachment = data;
	_imageAttachment = image;

	return QueuePass::init(builder);
}
```

## Запуск графики и вычислений

Для запуска очереди необходимо создать запрос на кадр: `core::FrameRequest`.


```cpp
// запускаем с функцией получения данных изображения
static void run(core::Loop *loop, NoiseQueue *noiseQueue, NoiseData noiseData, Function<void(core::ImageInfoData info, BytesView view)> &&cb) {
	// параметры кадра
	auto constraints = core::FrameContraints{Extent2(1024, 768)};
	auto req = Rc<core::FrameRequest>::create(noiseQueue, constraints);

	// Входящие данные для вложения
	//
	// Не обязательно всегда полностью предоставлять входящие данные при запуске кадра
	// Система запустит те проходы, которые возможно запустить с предоставленными данными, и будет ожидать ввода для остальных.
	// После запуска данные можно отправлять той же функцией, но только из графического потока (см. Loop::perform).
	auto inputData = Rc<NoiseDataInput>::alloc();
	inputData->data = noiseData;
	req->addInput(noiseQueue->getDataAttachment(), move(inputData));

	// захватываем выход
	req->setOutput(noiseQueue->getImageAttachment(), [loop, cb = move(cb)] (core::FrameAttachmentData &data, bool success, Ref *) mutable {
		// захватываем изображение и переносим на сторону CPU
		loop->captureImage([cb = move(cb)] (core::ImageInfoData info, BytesView view) {
			cb(info, view);
		}, data.image->getImage(), core::AttachmentLayout::General);
		return true;
	});
	
	// запускам кадр (последний аргумент - поколение вызовов, используется для контроля изменений состояния приложения)
	
	// после этого вызова кадр обрабатывается полностью асинхронно. Функция будет вызвана в графическом потоке, и результат, вероятно, нужно будет перенести в основной поток.
	loop->runRenderQueue(move(req), 0);
}
```