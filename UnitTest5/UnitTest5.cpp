#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 1;
			int f = 1;
			int rounds = 1;
			Assert::AreEqual(f, findLastPerson(n, rounds), 1e-1);
		}
	};
}
