Title: Графические окна

# Графические окна

Для запуска графических окон необходим модуль `xenolith_backend_vkgui`. Для упрощения работы используется модуль `xenolith::application`.

Класс приложения (`xenolith::Application`) -  основной для работы графического оконного приложения. Класс `vk::GuiApplication` контролирует создание графического API так, чтобы оно было пригодно для графических окон. Класс `vk::BootstrapApplication` реализует базовое работоспосбное приложение.

Для реализации собственной версии оконного приложения необходимо использовать функцию `vk::platform::initInstance`, инициализирующую графический API для использования с текущей оконной системой:

```cpp
auto inst = vk::platform::createInstance([&] (vk::platform::VulkanInstanceData &data, const vk::platform::VulkanInstanceInfo &info) {
	data.applicationName = appInfo.applicationName;
	data.applicationVersion = appInfo.applicationVersion;
	data.checkPresentationSupport = vk::platform::checkPresentationSupport;
	return vk::platform::initInstance(data, info);
});
```

Для создания окна используется функция `Application::addView`:

``` cpp
addView(ViewInfo{
	.name = "Имя приложения",
	.bundleId = "name.bundle.org",
	.rect = URect(UVec2{0, 0}, _data.screenSize),
	.decoration = _data.viewDecoration,
	.density = _data.density,
	.selectConfig = [this] (xenolith::View &view, const core::SurfaceInfo &info) -> core::SwapchainConfig {
		// функция выбора конфигурации для окна
		return selectConfig(static_cast<View &>(view), info);
	},
	.onCreated = [this] (xenolith::View &view, const core::FrameContraints &constraints) {
		// создание сцены
		auto scene = createSceneForView(static_cast<View &>(view), constraints);
		view.getDirector()->runScene(move(scene));
	},
	.onClosed = [this] (xenolith::View &view) {
		// закрытие окна
		end(); // завершает работу приложения
	}
});
```

Основная проблема - ввыбор рабочей конфигурации для окна. Система предоставляет доступные для выбора параметры в виде `SurfaceInfo`, необходимо вернуть `SwapchainConfig` с выбранной конфигурацией.

Базовая реализация такова:

```cpp
core::SwapchainConfig BootstrapApplication::selectConfig(vk::View &, const core::SurfaceInfo &info) {
	std::unique_lock<Mutex> lock(_configMutex);

	core::SwapchainConfig ret;
	// не изменяем предлагаемый размер
	ret.extent = info.currentExtent;
	
	// 2 для двойной буферизации, 3 для тройной
	ret.imageCount = std::max(uint32_t(3), info.minImageCount);

	// режимы презентации отсортированы по предпочтению движка, выбираем лучший из доступных
	ret.presentMode = info.presentModes.front();

	// быстрый режим презентации используется при активной трансформации окна для быстрой реакции на ввод. Если доступен режим Immediate - используется он
	// в противном случае, быстрый режим не используется
	if (std::find(info.presentModes.begin(), info.presentModes.end(), core::PresentMode::Immediate) != info.presentModes.end()) {
		ret.presentModeFast = core::PresentMode::Immediate;
	}

	// ищем базовый для платформы формат изображения в списке
	// пользователь может определить свой алгоритм поиска и выбирать из доступных форматов
	auto it = info.formats.begin();
	while (it != info.formats.end()) {
		if (it->first != xenolith::platform::getCommonFormat()) {
			++ it;
		} else {
			break;
		}
	}

	// если не найдено - выбираем первый доступный
	if (it == info.formats.end()) {
		ret.imageFormat = info.formats.front().first;
		ret.colorSpace = info.formats.front().second;
	} else {
		// если найдено - используем найденный
		ret.imageFormat = it->first;
		ret.colorSpace = it->second;
	}

	// Проверяем, доступен ли режим непрозрачных окон, иначе - используем режим наследования родительского окна
	if ((info.supportedCompositeAlpha & core::CompositeAlphaFlags::Opaque) != core::CompositeAlphaFlags::None) {
		ret.alpha = core::CompositeAlphaFlags::Opaque;
	} else if ((info.supportedCompositeAlpha & core::CompositeAlphaFlags::Inherit) != core::CompositeAlphaFlags::None) {
		ret.alpha = core::CompositeAlphaFlags::Inherit;
	}

	// Проверяем, доступен ли трансфер в конечное изображение, вместо отрисовки.
	// Это определяет доступность рендеринга вне экрана для рисования в окно.
	ret.transfer = (info.supportedUsageFlags & core::ImageUsage::TransferDst) != core::ImageUsage::None;

	// Для mailbox принудительно включаем тройную буфферизацию, этот режим часто имеет проблемы с двойной буферизацией в драйвере
	if (ret.presentMode == core::PresentMode::Mailbox) {
		ret.imageCount = std::max(uint32_t(3), ret.imageCount);
	}

	// Не меняем трансформацию
	ret.transform = info.currentTransform;

	// Сохраняем результат в основном потоке
	performOnMainThread([this, info, ret] {
		_surfaceInfo = info;
		_swapchainConfig = ret;

		onSwapchainConfig(this);
	});

	return ret;
}
```
