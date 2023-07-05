#include "pch.h"
#include "../Project2/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestName2) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(TestCaseName, TestGetSumSum) {
	EXPECT_EQ(6, getSumSum(1, 2, 3));
}