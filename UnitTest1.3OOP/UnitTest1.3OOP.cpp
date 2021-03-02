#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab1.3OOP/Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13OOP
{
	TEST_CLASS(UnitTest13OOP)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction f1;
			long int i = 100;
			unsigned short f = 1;
			Assert::AreEqual(true, f1.Init(i, f));
		}
	};
}
