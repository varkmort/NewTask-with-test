#include "pch.h"
#include "CppUnitTest.h"

#include <string>

#include "..\MathLib\MathLib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MathTests
{
	TEST_CLASS(SummTests)
	{
	public:
		
		TEST_METHOD(BasicExist)
		{
			Assert::AreEqual(
				0,
				Summ(0,0),
				L"Function didn't exist"
			);
		}

		TEST_METHOD(PositivCorrectness) {
			Assert::AreEqual(
				10,
				Summ(5, 5),
				L"Function didn't exist"
			);
		}

	
	};

	TEST_CLASS(MultiplyTest) {
	public:

	TEST_METHOD(BasicExist) {
		Assert::AreEqual(
			0.0,
			Multiply(0, 0),
			L"Function didn't exist"
		);
	}

	TEST_METHOD(PositivCorrectness) {
		Assert::AreEqual(
			25.0,
			Multiply(5, 5),
			L"Function didn't exist"
		);
	}


	};
}
