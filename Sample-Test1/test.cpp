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

TEST(Visual001Test, MinusTest)
{
	EXPECT_EQ(0, getMinus(1, 1));
}