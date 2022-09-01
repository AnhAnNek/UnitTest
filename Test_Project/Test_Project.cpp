#include "pch.h"
#include "CppUnitTest.h"
#include "../TestMethodHasReturnValueType/TestMethodHasReturnValueType.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProject
{
	TEST_CLASS(TestProject)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string name = "Van An";
			Assert::AreEqual("Hello " + name, hello(name));
		}

		TEST_METHOD(TestMethod2)
		{
			std::string name = "John";
			Assert::AreEqual("Hello " + name, hello(name));
		}

		TEST_METHOD(TestMethod3)
		{
			std::string name = "David";
			Assert::AreEqual("Hello " + name, hello(name));
		}

		TEST_METHOD(TestMethod4)
		{
			std::string name = "Sara";
			Assert::AreEqual("Hello " + name, hello(name));
		}

		TEST_METHOD(TestMethod5)
		{
			std::string name = "Wiliam";
			Assert::AreEqual("Hello " + name, hello(name));
		}
	};
}
