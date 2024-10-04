#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab№5.4/Lab№5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test)
		{
			int K = 1;
			int N = 10;

			Assert::AreEqual(S0(K, N), 3.81188, 0.00001);
			Assert::AreEqual(S1(K, N, K), 3.81188, 0.00001);
			Assert::AreEqual(S2(K, N, N), 3.81188, 0.00001);
			Assert::AreEqual(S3(K, N, K, 0), 3.81188, 0.00001);
			Assert::AreEqual(S4(K, N, N, 0), 3.81188, 0.00001);
		}
	};
}
