//
// Copyright (c) 2017 Rick Qiu. All rights reserved.
//
#ifndef CPLUSPLUS_ALGODS_REORDER_H_
#define CPLUSPLUS_ALGODS_REORDER_H_

#include <algorithm>

namespace cplusplus {
namespace algods {
template<typename BidirectionIt, typename UnaryPredicate>
void Reorder(BidirectionIt first, BidirectionIt last, UnaryPredicate pred) {
  BidirectionIt forward = first;
  BidirectionIt backward = --last;
  while (forward != backward) {
    while (forward != backward && pred(*forward)) {
      ++forward;
    }
    while (forward != backward && !pred(*backward)) {
      --backward;
    }
    if (forward != backward) {
      std::iter_swap(forward, backward);
    }
  }
}
}  // namespace algods
}  // namespace cplusplus
#endif  // CPLUSPLUS_ALGODS_REORDER_H_
