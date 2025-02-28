#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 3.3 E/Liquid.h"
#include "..//OOP Lab 3.3 E/Solution.h"
#include "..//OOP Lab 3.3 E/Object.h"
#include "..//OOP Lab 3.3 E/Liquid.cpp"
#include "..//OOP Lab 3.3 E/Solution.cpp"
#include "..//OOP Lab 3.3 E/Object.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Liquid liquid("water", 23);
			Assert::AreEqual(23, liquid.getDensity());
		}
	};
}
