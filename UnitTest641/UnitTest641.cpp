#include "pch.h"
#include "CppUnitTest.h"
#include "../pr6.4.1.1/pr6.4.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest641
{
	TEST_CLASS(UnitTest641)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x[10] = { 1, 2, 3, 4, 5 , 6 ,7 ,8 , 9 , 10 };
			int f = 2;
			double res = sum(x, f, 10);
			Assert::AreEqual(res, res);
		}
	};
}