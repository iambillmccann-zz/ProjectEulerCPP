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

    MathLibrary* mathLibrary = new MathLibrary();

    TEST_CLASS(MathLibraryTests)
    {

    public:
        TEST_METHOD(ReverseEvenNumberOfDigits)
        {
            long long expected = 4321;
            long long actual = mathLibrary->ReverseDigits(1234);
            Assert::AreEqual(expected, actual);
        }

        TEST_METHOD(ReverseOddNumberOfDigits)
        {
            long long expected = 987654321;
            long long actual = mathLibrary->ReverseDigits(123456789);
            Assert::AreEqual(expected, actual);
        }

        TEST_METHOD(PassIsMultiple)
        {
            Assert::AreEqual(true, mathLibrary->IsMultiple(4, 2));
            Assert::AreEqual(true, mathLibrary->IsMultiple(9, 3));
            Assert::AreEqual(true, mathLibrary->IsMultiple(12, 6));
            Assert::AreEqual(true, mathLibrary->IsMultiple(25, 5));
            Assert::AreEqual(true, mathLibrary->IsMultiple(4648, 332));
            Assert::AreEqual(true, mathLibrary->IsMultiple(2, 1));
        }

        TEST_METHOD(FailIsMultiple)
        {
            Assert::AreEqual(false, mathLibrary->IsMultiple(4, 3));
            Assert::AreEqual(false, mathLibrary->IsMultiple(1, 0));
            Assert::AreEqual(false, mathLibrary->IsMultiple(13, 3));
            Assert::AreEqual(false, mathLibrary->IsMultiple(19, 18));
            Assert::AreEqual(false, mathLibrary->IsMultiple(23, 2));
            Assert::AreEqual(false, mathLibrary->IsMultiple(37, 66));
        }

        TEST_METHOD(ComputeSquare)
        {
            Assert::AreEqual((long long)25, mathLibrary->Square(5));
            Assert::AreEqual((long long)0, mathLibrary->Square(0));
            Assert::AreEqual((long long)1, mathLibrary->Square(-1));
        }

        TEST_METHOD(ComputeNaturalSum)
        {
            Assert::AreEqual((long long)55, mathLibrary->SumNatural(10));
            Assert::AreEqual((long long)0, mathLibrary->SumNatural(0));
            Assert::AreEqual((long long)0, mathLibrary->SumNatural(-10));
        }

        TEST_METHOD(ComputeSumSquares)
        {
            Assert::AreEqual((long long)385, mathLibrary->SumNaturalSquares(10));
            Assert::AreEqual((long long)0, mathLibrary->SumNaturalSquares(0));
            Assert::AreEqual((long long)0, mathLibrary->SumNaturalSquares(-10));
        }
    };

}