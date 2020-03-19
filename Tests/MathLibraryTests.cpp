#include "pch.h"
#include "CppUnitTest.h"
#include "Utilities.h"
#include "MathLibrary.cpp"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace EulerLibrary;
using namespace std;

namespace Tests
{

    TEST_CLASS(FormatingTests)
    {
    public:

        TEST_METHOD(ReverseEvenNumberOfDigits)
        {
            MathLibrary* mathLibrary = new MathLibrary();
            long long expected = 4321;
            long long actual = mathLibrary->ReverseDigits(1234);
            Assert::AreEqual(expected, actual);
        }

        TEST_METHOD(ReverseOddNumberOfDigits)
        {
            MathLibrary* mathLibrary = new MathLibrary();
            long long expected = 987654321;
            long long actual = mathLibrary->ReverseDigits(123456789);
            Assert::AreEqual(expected, actual);
        }
    };

}