#include "sort.h"

#include <functional>
#include <vector>

#include "gtest/gtest.h"

TEST(QuickSortTest, EmptyTest) {
  std::vector<int> v{};
  cplusplus::algods::QuickSort(v.begin(), v.end(), std::less<int>());
  EXPECT_EQ(v, std::vector<int>({}));
}

TEST(QuickSortTest, OneElementTest) {
  std::vector<int> v{2};
  cplusplus::algods::QuickSort(v.begin(), v.end(), std::less<int>());
  EXPECT_EQ(v, std::vector<int>({2}));
}

TEST(QuickSortTest, SortedTest) {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
  cplusplus::algods::QuickSort(v.begin(), v.end(), std::less<int>());
  EXPECT_EQ(v, std::vector<int>({1, 2, 3, 4, 5, 6, 7, 8, 9}));
}

TEST(QuickSortTest, ReverseTest) {
  std::vector<int> v{9, 8, 7, 6, 5, 4, 3, 2, 1};
  cplusplus::algods::QuickSort(v.begin(), v.end(), std::less<int>());
  EXPECT_EQ(v, std::vector<int>({1, 2, 3, 4, 5, 6, 7, 8, 9}));
}

TEST(QuickSortTest, NormalTest) {
  std::vector<int> v{5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
  cplusplus::algods::QuickSort(v.begin(), v.end(), std::less<int>());
  EXPECT_EQ(v, std::vector<int>({0, 1, 2, 3, 4, 5, 6, 7, 8, 9}));
}
