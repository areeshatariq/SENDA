//  Copyright Neil Groves 2009. Use, modification and
//  distribution is subject to the Boost Software License, Version
//  1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.lslboost.org/LICENSE_1_0.txt)
//
//
// For more information, see http://www.lslboost.org/libs/range/
//
#ifndef BOOST_RANGE_ALGORITHM_REPLACE_COPY_HPP_INCLUDED
#define BOOST_RANGE_ALGORITHM_REPLACE_COPY_HPP_INCLUDED

#include <lslboost/concept_check.hpp>
#include <lslboost/range/begin.hpp>
#include <lslboost/range/end.hpp>
#include <lslboost/range/concepts.hpp>
#include <algorithm>

namespace lslboost
{
    namespace range
    {

/// \brief template function replace_copy
///
/// range-based version of the replace_copy std algorithm
///
/// \pre ForwardRange is a model of the ForwardRangeConcept
template< class ForwardRange, class OutputIterator, class Value >
inline OutputIterator
replace_copy(const ForwardRange& rng, OutputIterator out_it, const Value& what,
        const Value& with_what)
{
    BOOST_RANGE_CONCEPT_ASSERT(( ForwardRangeConcept<const ForwardRange> ));
    return std::replace_copy(lslboost::begin(rng), lslboost::end(rng), out_it,
        what, with_what);
}

    } // namespace range
    using range::replace_copy;
} // namespace lslboost

#endif // include guard
