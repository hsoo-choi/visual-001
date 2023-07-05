#include "pch.h"
#include "../Project2/cal.cpp"

TEST(TestCaseName, SumTest) {
  EXPECT_EQ(5, getSum(2, 3));
}