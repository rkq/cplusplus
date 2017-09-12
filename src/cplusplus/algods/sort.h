//
// Copyright (c) 2017 Rick Qiu. All rights reserved.
//
#ifndef CPLUSPLUS_ALGODS_SORT_H_
#define CPLUSPLUS_ALGODS_SORT_H_

#include <iterator>
#include  <utility>

namespace cplusplus {
	namespace algods {
	template<class RandomIt, class Compare>
		void QuickSort(RandomIt first, RandomIt last, Compare comp) {
			if (std::distance(first, last) <= 1) {
				return;
			}
			RandomIt low = first + 1;
			RandomIt high = last - 1;
			while (low < high) {
				while (low < high && comp(*low, *first)) {
					++low;
				}
				while (low < high && !comp(*high, *first)) {
					--high;
				}
				if (low < high) {
					std::swap(*low, *high);
				}
			}
			if (comp(*low, *first)) {
				std::swap(*first, *low);
				QuickSort(first, low, comp);
				QuickSort(low + 1, last, comp);
			} else {
				std::swap(*first, *(low - 1));
				QuickSort(first, low - 1, comp);
				QuickSort(low, last, comp);
			}
		}
	}  // namespace algods
}  // namespace cplusplus
#endif  // CPLUSPLUS_ALGODS_REORDER_H_