Title: XLVkAllocator.h


# XENOLITH_BACKEND_VK_XLVKALLOCATOR_H_

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::AllocationUsage

## BRIEF

## CONTENT

Значения:
* DeviceLocal
* DeviceLocalHostVisible
* HostTransitionSource
* HostTransitionDestination
* DeviceLocalLazilyAllocated


# ::stappler::xenolith::vk::AllocationType

## BRIEF

## CONTENT

Значения:
* Unknown
* Linear
* Optimal


# ::stappler::xenolith::vk::MemoryRequirements

## BRIEF

## CONTENT


# ::stappler::xenolith::vk::MemoryRequirements::requirements

## BRIEF

## CONTENT

Тип: VkMemoryRequirements


# ::stappler::xenolith::vk::MemoryRequirements::targetOffset

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::MemoryRequirements::prefersDedicated

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::MemoryRequirements::requiresDedicated

## BRIEF

## CONTENT

Тип: bool


# ::stappler::xenolith::vk::Allocator

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::vk::Allocator::PageSize

## BRIEF

## CONTENT

Доступ: public

Тип: uint64_t const


# ::stappler::xenolith::vk::Allocator::MaxIndex

## BRIEF

## CONTENT

Доступ: public

Тип: uint64_t const


# ::stappler::xenolith::vk::Allocator::PreservePages

## BRIEF

## CONTENT

Доступ: public

Тип: uint64_t const


# ::stappler::xenolith::vk::Allocator::MemHeapType

## BRIEF

## CONTENT

Доступ: public

Значения:
* HostLocal
* DeviceLocal
* DeviceLocalHostVisible


# ::stappler::xenolith::vk::Allocator::MemNode

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Allocator::MemNode::index

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::vk::Allocator::MemNode::mem

## BRIEF

## CONTENT

Тип: VkDeviceMemory


# ::stappler::xenolith::vk::Allocator::MemNode::size

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::Allocator::MemNode::offset

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::Allocator::MemNode::lastAllocation

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::AllocationType


# ::stappler::xenolith::vk::Allocator::MemNode::ptr

## BRIEF

## CONTENT

Тип: void*


# ::stappler::xenolith::vk::Allocator::MemNode::mappingProtection

## BRIEF

## CONTENT

Тип: stappler::mem_std::Mutex*


# ::stappler::xenolith::vk::Allocator::MemNode::operator bool() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::MemNode::getFreeSpace() const

## BRIEF

## CONTENT

Возвращает:
* size_t

# ::stappler::xenolith::vk::Allocator::MemBlock

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Allocator::MemBlock::mem

## BRIEF

## CONTENT

Тип: VkDeviceMemory


# ::stappler::xenolith::vk::Allocator::MemBlock::offset

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::Allocator::MemBlock::size

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::Allocator::MemBlock::type

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::Allocator::MemBlock::ptr

## BRIEF

## CONTENT

Тип: void*


# ::stappler::xenolith::vk::Allocator::MemBlock::mappingProtection

## BRIEF

## CONTENT

Тип: stappler::mem_std::Mutex*


# ::stappler::xenolith::vk::Allocator::MemBlock::operator bool() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::MemType

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Allocator::MemType::idx

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::Allocator::MemType::type

## BRIEF

## CONTENT

Тип: VkMemoryType


# ::stappler::xenolith::vk::Allocator::MemType::min

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::vk::Allocator::MemType::last

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::vk::Allocator::MemType::max

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::vk::Allocator::MemType::current

## BRIEF

## CONTENT

Тип: uint64_t


# ::stappler::xenolith::vk::Allocator::MemType::buf

## BRIEF

## CONTENT

Тип: std::array<Vector<MemNode>, MaxIndex>


# ::stappler::xenolith::vk::Allocator::MemType::isDeviceLocal() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::MemType::isHostVisible() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::MemType::isHostCoherent() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::MemType::isHostCached() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::MemType::isLazilyAllocated() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::MemType::isProtected() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::MemHeap

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Allocator::MemHeap::idx

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::xenolith::vk::Allocator::MemHeap::heap

## BRIEF

## CONTENT

Тип: VkMemoryHeap


# ::stappler::xenolith::vk::Allocator::MemHeap::types

## BRIEF

## CONTENT

Тип: Vector<stappler::xenolith::vk::Allocator::MemType>


# ::stappler::xenolith::vk::Allocator::MemHeap::type

## BRIEF

## CONTENT

Тип: stappler::xenolith::vk::Allocator::MemHeapType


# ::stappler::xenolith::vk::Allocator::MemHeap::budget

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::Allocator::MemHeap::usage

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::Allocator::MemHeap::currentUsage

## BRIEF

## CONTENT

Тип: VkDeviceSize


# ::stappler::xenolith::vk::Allocator::~Allocator()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Allocator::init(stappler::xenolith::vk::Device&,VkPhysicalDevice,DeviceInfo::Features const&,DeviceInfo::Properties const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&
* VkPhysicalDevice
* DeviceInfo::Features const&
* DeviceInfo::Properties const&

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::invalidate(stappler::xenolith::vk::Device&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::Device&


# ::stappler::xenolith::vk::Allocator::update()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::Allocator::getInitialTypeMask() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* uint32_t

# ::stappler::xenolith::vk::Allocator::getMemHeaps() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Vector<stappler::xenolith::vk::Allocator::MemHeap> const&

# ::stappler::xenolith::vk::Allocator::getDevice() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::Device*

# ::stappler::xenolith::vk::Allocator::hasBudgetFeature() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::hasMemReq2Feature() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::hasDedicatedFeature() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::getBufferImageGranularity() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkDeviceSize

# ::stappler::xenolith::vk::Allocator::getNonCoherentAtomSize() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* VkDeviceSize

# ::stappler::xenolith::vk::Allocator::getMutex() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Mutex&

# ::stappler::xenolith::vk::Allocator::getType(uint32_t) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t

Возвращает:
* stappler::xenolith::vk::Allocator::MemType const*

# ::stappler::xenolith::vk::Allocator::findMemoryType(uint32_t,stappler::xenolith::vk::AllocationUsage) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* uint32_t
* stappler::xenolith::vk::AllocationUsage

Возвращает:
* stappler::xenolith::vk::Allocator::MemType*

# ::stappler::xenolith::vk::Allocator::getBufferMemoryRequirements(VkBuffer)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkBuffer

Возвращает:
* stappler::xenolith::vk::MemoryRequirements

# ::stappler::xenolith::vk::Allocator::getImageMemoryRequirements(VkImage)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* VkImage

Возвращает:
* stappler::xenolith::vk::MemoryRequirements

# ::stappler::xenolith::vk::Allocator::spawnPersistent(stappler::xenolith::vk::AllocationUsage,stappler::xenolith::vk::BufferInfo const&,stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::AllocationUsage
* stappler::xenolith::vk::BufferInfo const&
* stappler::BytesView

Возвращает:
* Rc<stappler::xenolith::vk::Buffer>

# ::stappler::xenolith::vk::Allocator::spawnPersistent(stappler::xenolith::vk::AllocationUsage,stappler::xenolith::vk::ImageInfoData const&,bool,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::AllocationUsage
* stappler::xenolith::vk::ImageInfoData const&
* bool
* uint64_t

Возвращает:
* Rc<stappler::xenolith::vk::Image>

# ::stappler::xenolith::vk::Allocator::preallocate(stappler::xenolith::vk::BufferInfo const&,stappler::BytesView)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::BufferInfo const&
* stappler::BytesView

Возвращает:
* Rc<stappler::xenolith::vk::Buffer>

# ::stappler::xenolith::vk::Allocator::preallocate(stappler::xenolith::vk::ImageInfoData const&,bool,uint64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::ImageInfoData const&
* bool
* uint64_t

Возвращает:
* Rc<stappler::xenolith::vk::Image>

# ::stappler::xenolith::vk::Allocator::emplaceObjects(stappler::xenolith::vk::AllocationUsage,SpanView<Rc<stappler::xenolith::vk::Image>>,SpanView<Rc<stappler::xenolith::vk::Buffer>>)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::AllocationUsage
* SpanView<Rc<stappler::xenolith::vk::Image>>
* SpanView<Rc<stappler::xenolith::vk::Buffer>>

Возвращает:
* Rc<stappler::xenolith::vk::DeviceMemory>

# ::stappler::xenolith::vk::Allocator::lock()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::vk::Allocator::unlock()

## BRIEF

## CONTENT

Доступ: protected


# ::stappler::xenolith::vk::Allocator::alloc(stappler::xenolith::vk::Allocator::MemType*,uint64_t,bool)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Allocator::MemType*
* uint64_t
* bool

Возвращает:
* stappler::xenolith::vk::Allocator::MemNode

# ::stappler::xenolith::vk::Allocator::free(stappler::xenolith::vk::Allocator::MemType*,SpanView<stappler::xenolith::vk::Allocator::MemNode>)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::Allocator::MemType*
* SpanView<stappler::xenolith::vk::Allocator::MemNode>


# ::stappler::xenolith::vk::Allocator::allocateDedicated(stappler::xenolith::vk::AllocationUsage,stappler::xenolith::vk::Buffer*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::AllocationUsage
* stappler::xenolith::vk::Buffer*

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::allocateDedicated(stappler::xenolith::vk::AllocationUsage,stappler::xenolith::vk::Image*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::AllocationUsage
* stappler::xenolith::vk::Image*

Возвращает:
* bool

# ::stappler::xenolith::vk::Allocator::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::vk::Allocator::_physicalDevice

## BRIEF

## CONTENT

Доступ: protected

Тип: VkPhysicalDevice


# ::stappler::xenolith::vk::Allocator::_device

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::xenolith::vk::Device*


# ::stappler::xenolith::vk::Allocator::_memBudget

## BRIEF

## CONTENT

Доступ: protected

Тип: VkPhysicalDeviceMemoryBudgetPropertiesEXT


# ::stappler::xenolith::vk::Allocator::_memProperties

## BRIEF

## CONTENT

Доступ: protected

Тип: VkPhysicalDeviceMemoryProperties2KHR


# ::stappler::xenolith::vk::Allocator::_memHeaps

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::xenolith::vk::Allocator::MemHeap>


# ::stappler::xenolith::vk::Allocator::_memTypes

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<const stappler::xenolith::vk::Allocator::MemType *>


# ::stappler::xenolith::vk::Allocator::_bufferImageGranularity

## BRIEF

## CONTENT

Доступ: protected

Тип: VkDeviceSize


# ::stappler::xenolith::vk::Allocator::_nonCoherentAtomSize

## BRIEF

## CONTENT

Доступ: protected

Тип: VkDeviceSize


# ::stappler::xenolith::vk::Allocator::_hasBudget

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::vk::Allocator::_hasMemReq2

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::vk::Allocator::_hasDedicated

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::vk::DeviceMemoryPool

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::xenolith::vk::DeviceMemoryPool::MemData

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::DeviceMemoryPool::MemData::type

## BRIEF

## CONTENT

Тип: Allocator::MemType*


# ::stappler::xenolith::vk::DeviceMemoryPool::MemData::mem

## BRIEF

## CONTENT

Тип: Vector<Allocator::MemNode>


# ::stappler::xenolith::vk::DeviceMemoryPool::MemData::freed

## BRIEF

## CONTENT

Тип: Vector<Allocator::MemBlock>


# ::stappler::xenolith::vk::DeviceMemoryPool::~DeviceMemoryPool()

## BRIEF

## CONTENT

Доступ: public


# ::stappler::xenolith::vk::DeviceMemoryPool::init(Rc<stappler::xenolith::vk::Allocator> const&,bool)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Rc<stappler::xenolith::vk::Allocator> const&
* bool

Возвращает:
* bool

# ::stappler::xenolith::vk::DeviceMemoryPool::spawn(stappler::xenolith::vk::AllocationUsage,stappler::xenolith::vk::BufferInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::AllocationUsage
* stappler::xenolith::vk::BufferInfo const&

Возвращает:
* Rc<stappler::xenolith::vk::Buffer>

# ::stappler::xenolith::vk::DeviceMemoryPool::spawn(stappler::xenolith::vk::AllocationUsage,stappler::xenolith::vk::ImageInfoData const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::AllocationUsage
* stappler::xenolith::vk::ImageInfoData const&

Возвращает:
* Rc<stappler::xenolith::vk::Image>

# ::stappler::xenolith::vk::DeviceMemoryPool::spawnPersistent(stappler::xenolith::vk::AllocationUsage,stappler::xenolith::vk::BufferInfo const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::AllocationUsage
* stappler::xenolith::vk::BufferInfo const&

Возвращает:
* Rc<stappler::xenolith::vk::Buffer>

# ::stappler::xenolith::vk::DeviceMemoryPool::getDevice() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::xenolith::vk::Device*

# ::stappler::xenolith::vk::DeviceMemoryPool::getAllocator() const

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* Rc<stappler::xenolith::vk::Allocator> const&

# ::stappler::xenolith::vk::DeviceMemoryPool::getMutex()

## BRIEF

## CONTENT

Доступ: public

Возвращает:
* stappler::mem_std::Mutex&

# ::stappler::xenolith::vk::DeviceMemoryPool::alloc(stappler::xenolith::vk::DeviceMemoryPool::MemData*,VkDeviceSize,VkDeviceSize,stappler::xenolith::vk::AllocationType,stappler::xenolith::vk::AllocationUsage)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::xenolith::vk::DeviceMemoryPool::MemData*
* VkDeviceSize
* VkDeviceSize
* stappler::xenolith::vk::AllocationType
* stappler::xenolith::vk::AllocationUsage

Возвращает:
* Allocator::MemBlock

# ::stappler::xenolith::vk::DeviceMemoryPool::free(Allocator::MemBlock&&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* Allocator::MemBlock&&


# ::stappler::xenolith::vk::DeviceMemoryPool::clear(stappler::xenolith::vk::DeviceMemoryPool::MemData*)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::xenolith::vk::DeviceMemoryPool::MemData*


# ::stappler::xenolith::vk::DeviceMemoryPool::_mutex

## BRIEF

## CONTENT

Доступ: protected

Тип: stappler::mem_std::Mutex


# ::stappler::xenolith::vk::DeviceMemoryPool::_persistentMapping

## BRIEF

## CONTENT

Доступ: protected

Тип: bool


# ::stappler::xenolith::vk::DeviceMemoryPool::_allocator

## BRIEF

## CONTENT

Доступ: protected

Тип: Rc<stappler::xenolith::vk::Allocator>


# ::stappler::xenolith::vk::DeviceMemoryPool::_heaps

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<int64_t, stappler::xenolith::vk::DeviceMemoryPool::MemData>


# ::stappler::xenolith::vk::DeviceMemoryPool::_mappingProtection

## BRIEF

## CONTENT

Доступ: protected

Тип: Map<VkDeviceMemory, stappler::mem_std::Mutex *>


# ::stappler::xenolith::vk::DeviceMemoryPool::_buffers

## BRIEF

## CONTENT

Доступ: protected

Тип: std::forward_list<Rc<Buffer>>


# ::stappler::xenolith::vk::DeviceMemoryPool::_images

## BRIEF

## CONTENT

Доступ: protected

Тип: std::forward_list<Rc<Image>>


# ::std::operator<<(std::ostream&,::stappler::xenolith::vk::AllocationUsage)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* ::stappler::xenolith::vk::AllocationUsage

Возвращает:
* std::ostream&