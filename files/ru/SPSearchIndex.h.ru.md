Title: SPSearchIndex.h


# MODULES_SEARCH_SPSEARCHINDEX_H_

## BRIEF

## CONTENT


# ::stappler::search::SearchIndex

## BRIEF

## CONTENT

Базовые классы:
* Ref


# ::stappler::search::SearchIndex::DefaultSep

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::SearchIndex::TokenType

## BRIEF

## CONTENT

Доступ: public

Значения:
* SearchNode
* SearchRequest


# ::stappler::search::SearchIndex::TokenCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::SearchIndex::TokenizerCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::SearchIndex::HeuristicCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::SearchIndex::FilterCallback

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::SearchIndex::Slice

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::SearchIndex::Slice::start

## BRIEF

## CONTENT

Тип: uint16_t


# ::stappler::search::SearchIndex::Slice::size

## BRIEF

## CONTENT

Тип: uint16_t


# ::stappler::search::SearchIndex::Node

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::SearchIndex::Node::id

## BRIEF

## CONTENT

Тип: int64_t


# ::stappler::search::SearchIndex::Node::tag

## BRIEF

## CONTENT

Тип: int64_t


# ::stappler::search::SearchIndex::Node::canonical

## BRIEF

## CONTENT

Тип: stappler::mem_pool::String


# ::stappler::search::SearchIndex::Node::alignment

## BRIEF

## CONTENT

Тип: stappler::search::Distance


# ::stappler::search::SearchIndex::Token

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::SearchIndex::Token::index

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::search::SearchIndex::Token::slice

## BRIEF

## CONTENT

Тип: stappler::search::SearchIndex::Slice


# ::stappler::search::SearchIndex::ResultToken

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::SearchIndex::ResultToken::word

## BRIEF

## CONTENT

Тип: uint32_t


# ::stappler::search::SearchIndex::ResultToken::match

## BRIEF

## CONTENT

Тип: uint16_t


# ::stappler::search::SearchIndex::ResultToken::slice

## BRIEF

## CONTENT

Тип: stappler::search::SearchIndex::Slice


# ::stappler::search::SearchIndex::ResultNode

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::SearchIndex::ResultNode::score

## BRIEF

## CONTENT

Тип: float


# ::stappler::search::SearchIndex::ResultNode::node

## BRIEF

## CONTENT

Тип: stappler::search::SearchIndex::Node const*


# ::stappler::search::SearchIndex::ResultNode::matches

## BRIEF

## CONTENT

Тип: Vector<stappler::search::SearchIndex::ResultToken>


# ::stappler::search::SearchIndex::Result

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::SearchIndex::Result::ref

## BRIEF

## CONTENT

Тип: Rc<stappler::search::SearchIndex>


# ::stappler::search::SearchIndex::Result::nodes

## BRIEF

## CONTENT

Тип: Vector<stappler::search::SearchIndex::ResultNode>


# ::stappler::search::SearchIndex::Heuristic

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::SearchIndex::Heuristic::TagCallback

## BRIEF

## CONTENT


# ::stappler::search::SearchIndex::Heuristic::SizeCallback

## BRIEF

## CONTENT


# ::stappler::search::SearchIndex::Heuristic::Heuristic()

## BRIEF

## CONTENT


# ::stappler::search::SearchIndex::Heuristic::Heuristic(stappler::search::SearchIndex::Heuristic::TagCallback const&,bool)

## BRIEF

## CONTENT

Параметры:
* stappler::search::SearchIndex::Heuristic::TagCallback const&
* bool


# ::stappler::search::SearchIndex::Heuristic::operator()(stappler::search::SearchIndex const&,SearchIndex::ResultNode const&)

## BRIEF

## CONTENT

Параметры:
* stappler::search::SearchIndex const&
* SearchIndex::ResultNode const&

Возвращает:
* float

# ::stappler::search::SearchIndex::Heuristic::excludeEqualMatches

## BRIEF

## CONTENT

Тип: bool


# ::stappler::search::SearchIndex::Heuristic::fullMatchScore

## BRIEF

## CONTENT

Тип: float


# ::stappler::search::SearchIndex::Heuristic::tagScore

## BRIEF

## CONTENT

Тип: TagCallback


# ::stappler::search::SearchIndex::Heuristic::wordScore

## BRIEF

## CONTENT

Тип: SizeCallback


# ::stappler::search::SearchIndex::Heuristic::positionScore

## BRIEF

## CONTENT

Тип: SizeCallback


# ::stappler::search::SearchIndex::init(stappler::search::SearchIndex::TokenizerCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::SearchIndex::TokenizerCallback const&

Возвращает:
* bool

# ::stappler::search::SearchIndex::reserve(size_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* size_t


# ::stappler::search::SearchIndex::add(stappler::StringView const&,int64_t,int64_t)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* int64_t
* int64_t


# ::stappler::search::SearchIndex::performSearch(stappler::StringView const&,size_t,stappler::search::SearchIndex::HeuristicCallback const&,stappler::search::SearchIndex::FilterCallback const&)

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::StringView const&
* size_t
* stappler::search::SearchIndex::HeuristicCallback const&
* stappler::search::SearchIndex::FilterCallback const&

Возвращает:
* stappler::search::SearchIndex::Result

# ::stappler::search::SearchIndex::resolveToken(stappler::search::SearchIndex::Node const&,stappler::search::SearchIndex::ResultToken const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::SearchIndex::Node const&
* stappler::search::SearchIndex::ResultToken const&

Возвращает:
* stappler::StringView

# ::stappler::search::SearchIndex::convertToken(stappler::search::SearchIndex::Node const&,stappler::search::SearchIndex::ResultToken const&) const

## BRIEF

## CONTENT

Доступ: public

Параметры:
* stappler::search::SearchIndex::Node const&
* stappler::search::SearchIndex::ResultToken const&

Возвращает:
* stappler::search::SearchIndex::Slice

# ::stappler::search::SearchIndex::print() const

## BRIEF

## CONTENT

Доступ: public


# ::stappler::search::SearchIndex::makeStringView(stappler::search::SearchIndex::Token const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* stappler::search::SearchIndex::Token const&

Возвращает:
* stappler::StringView

# ::stappler::search::SearchIndex::makeStringView(uint32_t,stappler::search::SearchIndex::Slice const&) const

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* uint32_t
* stappler::search::SearchIndex::Slice const&

Возвращает:
* stappler::StringView

# ::stappler::search::SearchIndex::onToken(Vector<stappler::search::SearchIndex::Token>&,stappler::StringView const&,uint32_t,stappler::search::SearchIndex::Slice const&)

## BRIEF

## CONTENT

Доступ: protected

Параметры:
* Vector<stappler::search::SearchIndex::Token>&
* stappler::StringView const&
* uint32_t
* stappler::search::SearchIndex::Slice const&


# ::stappler::search::SearchIndex::_nodes

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::search::SearchIndex::Node>


# ::stappler::search::SearchIndex::_tokens

## BRIEF

## CONTENT

Доступ: protected

Тип: Vector<stappler::search::SearchIndex::Token>


# ::stappler::search::SearchIndex::_tokenizer

## BRIEF

## CONTENT

Доступ: protected

Тип: TokenizerCallback
