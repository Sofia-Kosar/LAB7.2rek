#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB7.2rek/LAB7.2rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72rek
{
	TEST_CLASS(UnitTest72rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int rowCount = 3;
			const int colCount = 3;
			int S = 0, k = 0;

			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; ++i) {
				a[i] = new int[colCount];
			}


			a[0][0] = 2;
			a[0][1] = 3;
			a[1][0] = 4;
			a[1][1] = 6;
			a[0][2] = 11;
			a[2][0] = 2;
			a[1][2] = 5;
			a[2][1] = 8;
			a[2][2] = 2;

			int z = FindMaxSumInOddColumnsRecursive(a, rowCount, colCount);
			Assert::AreEqual(z, 8);
		}
	};
}
