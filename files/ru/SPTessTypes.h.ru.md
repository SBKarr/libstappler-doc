Title: SPTessTypes.h


# MODULES_TESS_SPTESSTYPES_H_

## BRIEF

## CONTENT


# ::stappler::geom::QueueHandle

## BRIEF

## CONTENT


# ::stappler::geom::VertexSetPrealloc

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::geom::EdgeSetPrealloc

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::geom::VertexAllocBatch

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::geom::EdgeAllocBatch

## BRIEF

## CONTENT

Тип: uint32_t const


# ::stappler::geom::TessVerboseInfo

## BRIEF

## CONTENT

Тип: int


# ::stappler::geom::VertexType

## BRIEF

## CONTENT

Значения:
* Start
* End
* Split
* Merge
* RegularTop
* RegularBottom


# ::stappler::geom::Helper

## BRIEF

## CONTENT


# ::stappler::geom::Helper::e1

## BRIEF

## CONTENT

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::Helper::e2

## BRIEF

## CONTENT

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::Helper::type

## BRIEF

## CONTENT

Тип: stappler::geom::VertexType


# ::stappler::geom::EdgeDictNode

## BRIEF

## CONTENT


# ::stappler::geom::EdgeDictNode::org

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::geom::EdgeDictNode::norm

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::geom::EdgeDictNode::value

## BRIEF

## CONTENT

Тип: stappler::geom::Vec4


# ::stappler::geom::EdgeDictNode::edge

## BRIEF

## CONTENT

Тип: stappler::geom::Edge*


# ::stappler::geom::EdgeDictNode::windingAbove

## BRIEF

## CONTENT

Тип: int16_t


# ::stappler::geom::EdgeDictNode::horizontal

## BRIEF

## CONTENT

Тип: bool


# ::stappler::geom::EdgeDictNode::helper

## BRIEF

## CONTENT

Тип: stappler::geom::Helper


# ::stappler::geom::EdgeDictNode::current() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::EdgeDictNode::dst() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::EdgeDictNode::dstX() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::EdgeDictNode::dstY() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::EdgeDictNode::operator<(stappler::geom::EdgeDictNode const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::EdgeDictNode const&

Возвращает:
* bool

# ::stappler::geom::EdgeDictNode::operator<(stappler::geom::Edge const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Edge const&

Возвращает:
* bool

# ::stappler::geom::EdgeDictNode::operator<(stappler::geom::Vec2 const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* bool

# ::stappler::geom::EdgeDictNode::operator<=(stappler::geom::EdgeDictNode const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::EdgeDictNode const&

Возвращает:
* bool

# ::stappler::geom::EdgeDictNode::operator==(stappler::geom::EdgeDictNode const&) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::EdgeDictNode const&

Возвращает:
* bool

# ::stappler::geom::Vertex

## BRIEF

## CONTENT


# ::stappler::geom::Vertex::_edge

## BRIEF

## CONTENT

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::Vertex::_origin

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::geom::Vertex::_uniqueIdx

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::Vertex::_queueHandle

## BRIEF

## CONTENT

Тип: stappler::geom::QueueHandle


# ::stappler::geom::Vertex::_exportIdx

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::Vertex::insertBefore(stappler::geom::HalfEdge*)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::HalfEdge*


# ::stappler::geom::Vertex::removeFromList(stappler::geom::Vertex*)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vertex*


# ::stappler::geom::Vertex::foreach(Callback<void (const stappler::geom::HalfEdge &)> const&) const

## BRIEF

## CONTENT

Параметры:
* Callback<void (const stappler::geom::HalfEdge &)> const&


# ::stappler::geom::Vertex::relocate(stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec2 const&


# ::stappler::geom::FaceEdge

## BRIEF

## CONTENT

Базовые классы:
* memory::AllocPool


# ::stappler::geom::FaceEdge::_next

## BRIEF

## CONTENT

Тип: stappler::geom::FaceEdge*


# ::stappler::geom::FaceEdge::_vertex

## BRIEF

## CONTENT

Тип: stappler::geom::Vertex*


# ::stappler::geom::FaceEdge::_origin

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::geom::FaceEdge::_displaced

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::geom::FaceEdge::_value

## BRIEF

## CONTENT

Тип: float


# ::stappler::geom::FaceEdge::_direction

## BRIEF

## CONTENT

Тип: float


# ::stappler::geom::FaceEdge::_splitVertex

## BRIEF

## CONTENT

Тип: bool


# ::stappler::geom::FaceEdge::_degenerate

## BRIEF

## CONTENT

Тип: bool


# ::stappler::geom::FaceEdge::foreach(Callback<void (const stappler::geom::FaceEdge &)> const&) const

## BRIEF

## CONTENT

Параметры:
* Callback<void (const stappler::geom::FaceEdge &)> const&


# ::stappler::geom::HalfEdge

## BRIEF

## CONTENT


# ::stappler::geom::HalfEdge::_originNext

## BRIEF

## CONTENT

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::HalfEdge::_leftNext

## BRIEF

## CONTENT

Тип: stappler::geom::HalfEdge*


# ::stappler::geom::HalfEdge::origin

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::geom::HalfEdge::vertex

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::HalfEdge::_realWinding

## BRIEF

## CONTENT

Тип: int16_t


# ::stappler::geom::HalfEdge::isRight

## BRIEF

## CONTENT

Тип: int16_t


# ::stappler::geom::HalfEdge::edgeOffset

## BRIEF

## CONTENT

Тип: int16_t


# ::stappler::geom::HalfEdge::_winding

## BRIEF

## CONTENT

Тип: int16_t


# ::stappler::geom::HalfEdge::_mark

## BRIEF

## CONTENT

Тип: int16_t


# ::stappler::geom::HalfEdge::splitEdgeLoops(stappler::geom::HalfEdge*,stappler::geom::HalfEdge*,stappler::geom::Vertex*)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::HalfEdge*
* stappler::geom::HalfEdge*
* stappler::geom::Vertex*


# ::stappler::geom::HalfEdge::joinEdgeLoops(stappler::geom::HalfEdge*,stappler::geom::HalfEdge*)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::HalfEdge*
* stappler::geom::HalfEdge*


# ::stappler::geom::HalfEdge::sym() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getIndex() const

## BRIEF

## CONTENT

Возвращает:
* uint32_t

# ::stappler::geom::HalfEdge::setOrigin(stappler::geom::Vertex const*)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vertex const*


# ::stappler::geom::HalfEdge::copyOrigin(stappler::geom::HalfEdge const*)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::HalfEdge const*


# ::stappler::geom::HalfEdge::getOriginNext() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getOriginPrev() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getDestinationNext() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getDestinationPrev() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getLeftLoopNext() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getLeftLoopPrev() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getRightLoopNext() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getRightLoopPrev() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::HalfEdge::getOrgVec() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Vec2 const&

# ::stappler::geom::HalfEdge::getDstVec() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Vec2 const&

# ::stappler::geom::HalfEdge::getNormVec() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Vec2

# ::stappler::geom::HalfEdge::getLength() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::HalfEdge::getEdge() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Edge*

# ::stappler::geom::HalfEdge::goesLeft() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::geom::HalfEdge::goesRight() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::geom::HalfEdge::foreachOnFace(Callback<void (stappler::geom::HalfEdge &)> const&)

## BRIEF

## CONTENT

Параметры:
* Callback<void (stappler::geom::HalfEdge &)> const&


# ::stappler::geom::HalfEdge::foreachOnVertex(Callback<void (stappler::geom::HalfEdge &)> const&)

## BRIEF

## CONTENT

Параметры:
* Callback<void (stappler::geom::HalfEdge &)> const&


# ::stappler::geom::HalfEdge::foreachOnFace(Callback<void (const stappler::geom::HalfEdge &)> const&) const

## BRIEF

## CONTENT

Параметры:
* Callback<void (const stappler::geom::HalfEdge &)> const&


# ::stappler::geom::HalfEdge::foreachOnVertex(Callback<void (const stappler::geom::HalfEdge &)> const&) const

## BRIEF

## CONTENT

Параметры:
* Callback<void (const stappler::geom::HalfEdge &)> const&


# ::stappler::geom::HalfEdge::getDirection() const

## BRIEF

## CONTENT

Возвращает:
* float

# ::stappler::geom::Edge

## BRIEF

## CONTENT


# ::stappler::geom::Edge::left

## BRIEF

## CONTENT

Тип: stappler::geom::HalfEdge


# ::stappler::geom::Edge::right

## BRIEF

## CONTENT

Тип: stappler::geom::HalfEdge


# ::stappler::geom::Edge::node

## BRIEF

## CONTENT

Тип: stappler::geom::EdgeDictNode const*


# ::stappler::geom::Edge::direction

## BRIEF

## CONTENT

Тип: float


# ::stappler::geom::Edge::inverted

## BRIEF

## CONTENT

Тип: bool


# ::stappler::geom::Edge::invalidated

## BRIEF

## CONTENT

Тип: bool


# ::stappler::geom::Edge::Edge()

## BRIEF

## CONTENT


# ::stappler::geom::Edge::getLeftVec() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Vec2 const&

# ::stappler::geom::Edge::getRightVec() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Vec2 const&

# ::stappler::geom::Edge::getOrgVec() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Vec2 const&

# ::stappler::geom::Edge::getDstVec() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Vec2 const&

# ::stappler::geom::Edge::getLeftOrg() const

## BRIEF

## CONTENT

Возвращает:
* uint32_t

# ::stappler::geom::Edge::getRightOrg() const

## BRIEF

## CONTENT

Возвращает:
* uint32_t

# ::stappler::geom::Edge::updateInfo()

## BRIEF

## CONTENT


# ::stappler::geom::Edge::getLeftWinding() const

## BRIEF

## CONTENT

Возвращает:
* int16_t

# ::stappler::geom::Edge::getRightWinding() const

## BRIEF

## CONTENT

Возвращает:
* int16_t

# ::stappler::geom::Edge::getPostitive()

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::Edge::getNegative()

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::HalfEdge*

# ::stappler::geom::ObjectAllocator

## BRIEF

## CONTENT

Базовые классы:
* memory::AllocPool


# ::stappler::geom::ObjectAllocator::_pool

## BRIEF

## CONTENT

Тип: memory::pool_t*


# ::stappler::geom::ObjectAllocator::_freeVertexes

## BRIEF

## CONTENT

Тип: stappler::geom::Vertex*


# ::stappler::geom::ObjectAllocator::_freeEdges

## BRIEF

## CONTENT

Тип: stappler::geom::Edge*


# ::stappler::geom::ObjectAllocator::_freeFaces

## BRIEF

## CONTENT

Тип: stappler::geom::FaceEdge*


# ::stappler::geom::ObjectAllocator::_vertexes

## BRIEF

## CONTENT

Тип: memory::vector<Vertex *>


# ::stappler::geom::ObjectAllocator::_exportVertexes

## BRIEF

## CONTENT

Тип: memory::vector<Vertex *>


# ::stappler::geom::ObjectAllocator::_edgesOfInterests

## BRIEF

## CONTENT

Тип: memory::vector<HalfEdge *>


# ::stappler::geom::ObjectAllocator::_faceEdges

## BRIEF

## CONTENT

Тип: memory::vector<HalfEdge *>


# ::stappler::geom::ObjectAllocator::_boundaries

## BRIEF

## CONTENT

Тип: memory::vector<FaceEdge *>


# ::stappler::geom::ObjectAllocator::_vertexOffset

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::ObjectAllocator::ObjectAllocator(memory::pool_t*)

## BRIEF

## CONTENT

Параметры:
* memory::pool_t*


# ::stappler::geom::ObjectAllocator::allocEdge()

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Edge*

# ::stappler::geom::ObjectAllocator::allocVertex()

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::Vertex*

# ::stappler::geom::ObjectAllocator::allocFaceEdge()

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::FaceEdge*

# ::stappler::geom::ObjectAllocator::releaseEdge(stappler::geom::Edge*)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Edge*


# ::stappler::geom::ObjectAllocator::releaseVertex(uint32_t,uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t
* uint32_t


# ::stappler::geom::ObjectAllocator::releaseVertex(stappler::geom::Vertex*)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vertex*


# ::stappler::geom::ObjectAllocator::trimVertexes()

## BRIEF

## CONTENT


# ::stappler::geom::ObjectAllocator::preallocateVertexes(uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t


# ::stappler::geom::ObjectAllocator::preallocateEdges(uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t


# ::stappler::geom::ObjectAllocator::preallocateFaceEdges(uint32_t)

## BRIEF

## CONTENT

Параметры:
* uint32_t


# ::stappler::geom::ObjectAllocator::removeEdgeFromVec(memory::vector<HalfEdge *>&,stappler::geom::HalfEdge*)

## BRIEF

## CONTENT

Параметры:
* memory::vector<HalfEdge *>&
* stappler::geom::HalfEdge*


# ::stappler::geom::VertexPriorityQueue

## BRIEF

## CONTENT


# ::stappler::geom::VertexPriorityQueue::Handle

## BRIEF

## CONTENT


# ::stappler::geom::VertexPriorityQueue::Key

## BRIEF

## CONTENT


# ::stappler::geom::VertexPriorityQueue::InvalidHandle

## BRIEF

## CONTENT

Тип: Handle


# ::stappler::geom::VertexPriorityQueue::Node

## BRIEF

## CONTENT


# ::stappler::geom::VertexPriorityQueue::Node::handle

## BRIEF

## CONTENT

Тип: stappler::geom::VertexPriorityQueue::Handle


# ::stappler::geom::VertexPriorityQueue::Elem

## BRIEF

## CONTENT


# ::stappler::geom::VertexPriorityQueue::Elem::key

## BRIEF

## CONTENT

Тип: stappler::geom::VertexPriorityQueue::Key


# ::stappler::geom::VertexPriorityQueue::Elem::node

## BRIEF

## CONTENT

Тип: stappler::geom::VertexPriorityQueue::Handle


# ::stappler::geom::VertexPriorityQueue::Heap

## BRIEF

## CONTENT


# ::stappler::geom::VertexPriorityQueue::Heap::nodes

## BRIEF

## CONTENT

Тип: stappler::geom::VertexPriorityQueue::Node*


# ::stappler::geom::VertexPriorityQueue::Heap::handles

## BRIEF

## CONTENT

Тип: stappler::geom::VertexPriorityQueue::Elem*


# ::stappler::geom::VertexPriorityQueue::Heap::size

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::VertexPriorityQueue::Heap::max

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::VertexPriorityQueue::Heap::freeList

## BRIEF

## CONTENT

Тип: stappler::geom::VertexPriorityQueue::Handle


# ::stappler::geom::VertexPriorityQueue::Heap::initialized

## BRIEF

## CONTENT

Тип: bool


# ::stappler::geom::VertexPriorityQueue::Heap::pool

## BRIEF

## CONTENT

Тип: memory::pool_t*


# ::stappler::geom::VertexPriorityQueue::Heap::Heap(memory::pool_t*,uint32_t)

## BRIEF

## CONTENT

Параметры:
* memory::pool_t*
* uint32_t


# ::stappler::geom::VertexPriorityQueue::Heap::~Heap()

## BRIEF

## CONTENT


# ::stappler::geom::VertexPriorityQueue::Heap::init()

## BRIEF

## CONTENT


# ::stappler::geom::VertexPriorityQueue::Heap::empty() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::geom::VertexPriorityQueue::Heap::getMin() const

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::VertexPriorityQueue::Key

# ::stappler::geom::VertexPriorityQueue::Heap::insert(stappler::geom::VertexPriorityQueue::Key)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::VertexPriorityQueue::Key

Возвращает:
* stappler::geom::VertexPriorityQueue::Handle

# ::stappler::geom::VertexPriorityQueue::Heap::extractMin()

## BRIEF

## CONTENT

Возвращает:
* stappler::geom::VertexPriorityQueue::Key

# ::stappler::geom::VertexPriorityQueue::Heap::remove(stappler::geom::VertexPriorityQueue::Handle)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::VertexPriorityQueue::Handle


# ::stappler::geom::VertexPriorityQueue::Heap::floatDown(int)

## BRIEF

## CONTENT

Параметры:
* int


# ::stappler::geom::VertexPriorityQueue::Heap::floatUp(int)

## BRIEF

## CONTENT

Параметры:
* int


# ::stappler::geom::VertexPriorityQueue::heap

## BRIEF

## CONTENT

Тип: stappler::geom::VertexPriorityQueue::Heap


# ::stappler::geom::VertexPriorityQueue::keys

## BRIEF

## CONTENT

Тип: Key*


# ::stappler::geom::VertexPriorityQueue::order

## BRIEF

## CONTENT

Тип: Key**


# ::stappler::geom::VertexPriorityQueue::size

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::VertexPriorityQueue::max

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::geom::VertexPriorityQueue::initialized

## BRIEF

## CONTENT

Тип: bool


# ::stappler::geom::VertexPriorityQueue::pool

## BRIEF

## CONTENT

Тип: memory::pool_t*


# ::stappler::geom::VertexPriorityQueue::freeList

## BRIEF

## CONTENT

Тип: Handle


# ::stappler::geom::VertexPriorityQueue::VertexPriorityQueue(memory::pool_t*,memory::vector<Vertex *> const&)

## BRIEF

## CONTENT

Параметры:
* memory::pool_t*
* memory::vector<Vertex *> const&


# ::stappler::geom::VertexPriorityQueue::~VertexPriorityQueue()

## BRIEF

## CONTENT


# ::stappler::geom::VertexPriorityQueue::init()

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::geom::VertexPriorityQueue::empty() const

## BRIEF

## CONTENT

Возвращает:
* bool

# ::stappler::geom::VertexPriorityQueue::insert(stappler::geom::VertexPriorityQueue::Key)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::VertexPriorityQueue::Key

Возвращает:
* Handle

# ::stappler::geom::VertexPriorityQueue::remove(stappler::geom::VertexPriorityQueue::Handle)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::VertexPriorityQueue::Handle


# ::stappler::geom::VertexPriorityQueue::extractMin()

## BRIEF

## CONTENT

Возвращает:
* Key

# ::stappler::geom::VertexPriorityQueue::getMin() const

## BRIEF

## CONTENT

Возвращает:
* Key

# ::stappler::geom::IntersectionEvent

## BRIEF

## CONTENT

Значения:
* Regular
* EventIsIntersection
* EdgeConnection1
* EdgeConnection2


# ::stappler::geom::EdgeDict

## BRIEF

## CONTENT


# ::stappler::geom::EdgeDict::event

## BRIEF

## CONTENT

Тип: stappler::geom::Vec2


# ::stappler::geom::EdgeDict::nodes

## BRIEF

## CONTENT

Тип: memory::set<EdgeDictNode>


# ::stappler::geom::EdgeDict::pool

## BRIEF

## CONTENT

Тип: memory::pool_t*


# ::stappler::geom::EdgeDict::EdgeDict(memory::pool_t*,uint32_t)

## BRIEF

## CONTENT

Параметры:
* memory::pool_t*
* uint32_t


# ::stappler::geom::EdgeDict::push(stappler::geom::Edge*,int16_t)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Edge*
* int16_t

Возвращает:
* stappler::geom::EdgeDictNode const*

# ::stappler::geom::EdgeDict::pop(stappler::geom::EdgeDictNode const*)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::EdgeDictNode const*


# ::stappler::geom::EdgeDict::update(stappler::geom::Vertex*,float)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vertex*
* float


# ::stappler::geom::EdgeDict::checkForIntersects(stappler::geom::Vertex*,stappler::geom::Vec2&,stappler::geom::IntersectionEvent&,float) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vertex*
* stappler::geom::Vec2&
* stappler::geom::IntersectionEvent&
* float

Возвращает:
* stappler::geom::EdgeDictNode const*

# ::stappler::geom::EdgeDict::checkForIntersects(stappler::geom::HalfEdge*,stappler::geom::Vec2&,stappler::geom::IntersectionEvent&,float) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::HalfEdge*
* stappler::geom::Vec2&
* stappler::geom::IntersectionEvent&
* float

Возвращает:
* stappler::geom::EdgeDictNode const*

# ::stappler::geom::EdgeDict::getEdgeBelow(stappler::geom::Edge const*) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Edge const*

Возвращает:
* stappler::geom::EdgeDictNode const*

# ::stappler::geom::EdgeDict::getEdgeBelow(stappler::geom::Vec2 const&,uint32_t) const

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec2 const&
* uint32_t

Возвращает:
* stappler::geom::EdgeDictNode const*

# ::stappler::geom::VertLeq(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* bool

# ::stappler::geom::VertLeq(stappler::geom::Vertex const*,stappler::geom::Vertex const*)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vertex const*
* stappler::geom::Vertex const*

Возвращает:
* bool

# ::stappler::geom::VertEq(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&,float)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&
* float

Возвращает:
* bool

# ::stappler::geom::FloatEq(float,float,float)

## BRIEF

## CONTENT

Параметры:
* float
* float
* float

Возвращает:
* bool

# ::stappler::geom::VertEq(stappler::geom::Vertex const*,stappler::geom::Vertex const*,float)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vertex const*
* stappler::geom::Vertex const*
* float

Возвращает:
* bool

# ::stappler::geom::EdgeGoesRight(stappler::geom::HalfEdge const*)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::HalfEdge const*

Возвращает:
* bool

# ::stappler::geom::EdgeGoesLeft(stappler::geom::HalfEdge const*)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::HalfEdge const*

Возвращает:
* bool

# ::stappler::geom::AngleIsConvex(stappler::geom::HalfEdge const*,stappler::geom::HalfEdge const*)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::HalfEdge const*
* stappler::geom::HalfEdge const*

Возвращает:
* bool

# ::stappler::geom::EdgeDirection(stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* float

# ::stappler::geom::EdgeAngle(stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec2 const&

Возвращает:
* float

# ::stappler::geom::EdgeAngle(stappler::geom::Vec2 const&,stappler::geom::Vec2 const&)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Vec2 const&
* stappler::geom::Vec2 const&

Возвращает:
* float

# ::stappler::geom::EdgeAngleIsBelowTolerance(float,float)

## BRIEF

## CONTENT

Параметры:
* float
* float

Возвращает:
* bool

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Vertex const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::Vertex const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::HalfEdge const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::HalfEdge const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::FaceEdge const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::FaceEdge const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::VerboseFlag)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::VerboseFlag

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::EdgeDictNode const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::EdgeDictNode const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::Edge const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::Edge const&

Возвращает:
* std::ostream&

# ::stappler::geom::operator<<(std::ostream&,stappler::geom::IntersectionEvent const&)

## BRIEF

## CONTENT

Параметры:
* std::ostream&
* stappler::geom::IntersectionEvent const&

Возвращает:
* std::ostream&

# ::stappler::geom::isWindingInside(stappler::geom::Winding,int16_t)

## BRIEF

## CONTENT

Параметры:
* stappler::geom::Winding
* int16_t

Возвращает:
* bool