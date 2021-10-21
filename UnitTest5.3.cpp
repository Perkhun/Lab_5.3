#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = h(0);
			Assert::AreEqual(1., t);
		}
	};
}
