#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.2/lab5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double s;
			int n;

			S(0.0, 1e-10, n, s);

			Assert::AreEqual(1.0, s, 1e-10);
		}
	};
}
