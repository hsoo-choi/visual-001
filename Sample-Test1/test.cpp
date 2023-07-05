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

TEST(GetZegopTest, ZeroInput)
{
    int result = getZegop(0);
    EXPECT_EQ(result, 0);
}

TEST(GetZegopTest, NonZeroInput)
{
    int result = getZegop(5);
    EXPECT_EQ(result, 25);
}

TEST(TestCaseName, SumTest) {
  EXPECT_EQ(5, getSum(2, 3));
}

TEST(Visual001Test, MinusTest)
{
	EXPECT_EQ(0, getMinus(1, 1));
}

TEST(TestCaseName, TestGetSumSum) {
	EXPECT_EQ(6, getSumSum(1, 2, 3));
}