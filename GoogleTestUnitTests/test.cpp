#include "pch.h"

class AddTwoNumbersTest : public ::testing::Test
{
protected:
	DemoClass demoClass;
};

TEST_F(AddTwoNumbersTest, CanAddTwoNumbers)
{
	EXPECT_EQ(10, demoClass.AddTwoNumbers(5, 5));
}

TEST_F(AddTwoNumbersTest, DoesNotDealWithUnderflow)
{
	EXPECT_EQ(INT_MAX, demoClass.AddTwoNumbers(-1, INT_MIN));
}

TEST_F(AddTwoNumbersTest, DoesNotDealWithOverflow)
{
	EXPECT_EQ(INT_MIN, demoClass.AddTwoNumbers(1, INT_MAX));
}