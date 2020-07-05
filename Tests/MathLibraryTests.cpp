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
        
        TEST_METHOD(ComputeGetPrime)
        {
            list<long long> expected = { 2, 3, 5, 7, 11, 13, 17, 19 };
            list<long long> actual = mathLibrary->GetPrime(20);
            Assert::IsTrue(expected == actual);

            actual = mathLibrary->GetPrime(23);
            Assert::IsTrue(9 == actual.size());

            Assert::AreEqual((long long)7919, mathLibrary->GetPrime(7920).back());
        }
        
        TEST_METHOD(ComputeSeriesProduct)
        {
            list<long long> numbers = { 2, 3, 4, 5 };
            Assert::AreEqual((long long)120, mathLibrary->SeriesProduct(numbers));

            numbers = { 0, 999, 33, 10, -1 };
            Assert::AreEqual((long long)0, mathLibrary->SeriesProduct(numbers));

            numbers = { 9, 9, 8, 9 };
            Assert::AreEqual((long long)5832, mathLibrary->SeriesProduct(numbers));
        }
        
        TEST_METHOD(ComputeSeriesSum)
        {
            list<long long> numbers = { 2, 3, 5, 7 };
            Assert::AreEqual((long long)17, mathLibrary->SeriesSum(numbers));
        }
        
        TEST_METHOD(ComputeGetDivisors)
        {
            list<long long> actual = mathLibrary->GetDivisors(1);
            Assert::IsTrue(actual.size() == 1);
            Assert::IsTrue(std::find(actual.begin(), actual.end(), 1) != actual.end());

            actual = mathLibrary->GetDivisors(3);
            Assert::IsTrue(actual.size() == 2);
            Assert::IsTrue(std::find(actual.begin(), actual.end(), 1) != actual.end());
            Assert::IsTrue(std::find(actual.begin(), actual.end(), 3) != actual.end());

            actual = mathLibrary->GetDivisors(28);
            Assert::IsTrue(actual.size() == 6);
            Assert::IsTrue(std::find(actual.begin(), actual.end(), 1) != actual.end());
            Assert::IsTrue(std::find(actual.begin(), actual.end(), 2) != actual.end());
            Assert::IsTrue(std::find(actual.begin(), actual.end(), 4) != actual.end());
            Assert::IsTrue(std::find(actual.begin(), actual.end(), 7) != actual.end());
            Assert::IsTrue(std::find(actual.begin(), actual.end(), 14) != actual.end());
            Assert::IsTrue(std::find(actual.begin(), actual.end(), 28) != actual.end());
        }
    };
}