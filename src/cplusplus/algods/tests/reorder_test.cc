#include "reorder.h"

#include <list>

#include "gtest/gtest.h"

bool IsOdd(int a) {
  return (a & 0x1) != 0;
}

TEST(ReorderTest, NormalTest) {
  std::list<int> v({1, 2, 3, 4, 5, 6, 7, 8, 9});
  cplusplus::algods::Reorder(v.begin(), v.end(), IsOdd);
  EXPECT_EQ(v, std::list<int>({1, 9, 3, 7, 5, 6, 4, 8, 2}));
}

TEST(ReorderTest, NoOperation) {
  std::list<int> v({1, 3, 5, 7, 9, 2, 4, 6, 8});
  cplusplus::algods::Reorder(v.begin(), v.end(), IsOdd);
  EXPECT_EQ(v, std::list<int>({1, 3, 5, 7, 9, 2, 4, 6, 8}));
}
