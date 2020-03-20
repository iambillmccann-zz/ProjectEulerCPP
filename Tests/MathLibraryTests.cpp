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

    TEST_CLASS(MathLibraryTests)
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

        TEST_METHOD(PassIsMultiple)
        {
            MathLibrary* mathLibrary = new MathLibrary();
            Assert::AreEqual(true, mathLibrary->IsMultiple(4, 2));
            Assert::AreEqual(true, mathLibrary->IsMultiple(9, 3));
            Assert::AreEqual(true, mathLibrary->IsMultiple(12, 6));
            Assert::AreEqual(true, mathLibrary->IsMultiple(25, 5));
            Assert::AreEqual(true, mathLibrary->IsMultiple(4648, 332));
            Assert::AreEqual(true, mathLibrary->IsMultiple(2, 1));
        }

        TEST_METHOD(FailIsMultiple)
        {
            MathLibrary* mathLibrary = new MathLibrary();
            Assert::AreEqual(false, mathLibrary->IsMultiple(4, 3));
            Assert::AreEqual(false, mathLibrary->IsMultiple(1, 0));
            Assert::AreEqual(false, mathLibrary->IsMultiple(13, 3));
            Assert::AreEqual(false, mathLibrary->IsMultiple(19, 18));
            Assert::AreEqual(false, mathLibrary->IsMultiple(23, 2));
            Assert::AreEqual(false, mathLibrary->IsMultiple(37, 66));
        }
    };

}