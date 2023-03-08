#include "pch.h"
#include "CppUnitTest.h"
#include "..\ConsoleApplication7\Foo.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			Assert::IsTrue(sum(1,2) == 3);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: Your test code here
			Assert::IsTrue(sum(-10, -2) == -12);
		}
	};
}
