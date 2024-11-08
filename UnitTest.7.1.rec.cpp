#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71rec
{
	TEST_CLASS(UnitTest71rec)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int rowCount = 3;
			const int colCount = 3;
			int testMatrix[rowCount][colCount] = {
				{ 14, 2, 7 },
				{ 28, 6, 10 },
				{ 8, 4, 12 }
			};

		};
	};
};