#include "pch.h"
#include "CppUnitTest.h"
#include "../1.8/Payment.h"
#include "../1.8/Payment.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My18UnitTest
{
	TEST_CLASS(My18UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Payment z;
			z.Init(10000, 100, 50, 10000, 0);
			int test = z.³nterestt();
			Assert::AreEqual(15000, test);

		}
	};
}
