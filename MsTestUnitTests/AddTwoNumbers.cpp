#include "stdafx.h"
#include "CppUnitTest.h"
#include "DemoClass.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MsTestUnitTests
{		
	TEST_CLASS(AddTwoNumbers)
	{
	public:

		TEST_METHOD(CanAddTwoNumbers)
		{
			Assert::AreEqual(10, demoClass.AddTwoNumbers(5, 5));
		}

		TEST_METHOD(DoesNotDealWithOverflow)
		{
			Assert::AreEqual(INT_MIN, demoClass.AddTwoNumbers(1, INT_MAX));
		}

		TEST_METHOD(DoesNotDealWIthUnderflow)
		{
			Assert::AreEqual(INT_MAX, demoClass.AddTwoNumbers(-1, INT_MIN));
		}

	private:
		DemoClass demoClass;
	};
}