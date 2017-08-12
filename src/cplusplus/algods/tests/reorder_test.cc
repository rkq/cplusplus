#include "reorder.h"

#include <vector>

#include "gtest/gtest.h"

bool IsOdd(int a) {
  return a % 2 != 0;
}

TEST(TestReorder, NormalTest) {
  std::vector<int> v({1, 2, 3, 4, 5, 6, 7, 8, 9});
  cplusplus::Reorder(v.begin(), v.end(), IsOdd);
  EXPECT_EQ(v, std::vector<int>({1, 9, 3, 7, 5, 6, 4, 8, 2}));
}

TEST(TestReorder, NoOperation) {
  std::vector<int> v({1, 3, 5, 7, 9, 2, 4, 6, 8});
  cplusplus::Reorder(v.begin(), v.end(), IsOdd);
  EXPECT_EQ(v, std::vector<int>({1, 3, 5, 7, 9, 2, 4, 6, 8}));
}
