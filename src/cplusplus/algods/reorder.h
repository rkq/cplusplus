//
// Copyright (c) 2017 Rick Qiu. All rights reserved.
//
#ifndef CPLUSPLUS_ALGODS_REORDER_H_
#define CPLUSPLUS_ALGODS_REORDER_H_

#include <algorithm>

namespace cplusplus {
namespace algods {
template<typename RandomIt, typename UnaryPredicate>
void Reorder(RandomIt first, RandomIt last, UnaryPredicate pred) {
  RandomIt forward = first;
  RandomIt backward = last - 1;
  while (forward < backward) {
    while (forward < backward && pred(*forward)) {
      ++forward;
    }
    while (forward < backward && !pred(*backward)) {
      --backward;
    }
    if (forward < backward) {
      std::iter_swap(forward, backward);
    }
  }
}
}  // namespace algods
}  // namespace cplusplus
#endif  // CPLUSPLUS_ALGODS_REORDER_H_
