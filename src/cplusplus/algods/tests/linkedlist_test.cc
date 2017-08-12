#include "linkedlist.h"

#include <vector>

#include "gtest/gtest.h"

class LinkedlistTest: public ::testing::Test {
protected:
	virtual void SetUp() {
		std::vector<int> v({1, 2, 3, 4, 5});
		head = cplusplus::algods::CreateList<int>(v.begin(), v.end());
	}

	virtual void TearDown() {
		cplusplus::algods::DestroyList(head);
	}
	cplusplus::algods::ListNode<int> *head;	
};

TEST_F(LinkedlistTest, TestNormal) {
	EXPECT_EQ(cplusplus::algods::List2String(head, "->"), "1->2->3->4->5");
}

TEST_F(LinkedlistTest, TestReverse) {
	cplusplus::algods::ReverseList(head);
	EXPECT_EQ(cplusplus::algods::List2String(head, "->"), "5->4->3->2->1");
}