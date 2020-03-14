#include "pch.h"
#include "CppUnitTest.h"
#include "Utilities.h"
#include "Utilities.cpp"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace EulerLibrary;
using namespace std;

namespace Tests
{

    // The methods for testing FormatMillisconds verifies the following behaviors ...
    // 1. When milliseconds are less than 10, they will have two leading zeros
    // 2. When milliseconds are less than 100, they will have one leading zero
    // 3. When seconds are less then 10, they will have one leading zero
    // 4. When minutes are less then 10, they will have one leading zero
    // 5. When hours are less then 10, they will have one leading zero
    // 6. Milleseconds shall not exceeed 999
    // 7. Seconds shall not exceed 59
    // 8. Minutes shall not exceed 59
    // 9. Hours more than 99 will show all significant digits

	TEST_CLASS(FormatingTests)
	{
	public:
		
		TEST_METHOD(MillisecondsLessThan10)
		{
			Utilities* utilities = new Utilities();
			string expected = "00:00:00.006"s;
			string actual = utilities->FormatMilliseconds(6);
			Assert::AreEqual(expected, actual);
		}

        TEST_METHOD(MillsecondsLessThan100)
        {
            Utilities* utilities = new Utilities();
            string expected = "00:00:00.076"s;
            string actual = utilities->FormatMilliseconds(76);
            Assert::AreEqual(expected, actual);
        }
        
        TEST_METHOD(SecondsLessThan10)
        {
            Utilities* utilities = new Utilities();
            string expected = "00:00:05.000"s;
            string actual = utilities->FormatMilliseconds(5000);
            Assert::AreEqual(expected, actual);
        }

        TEST_METHOD(MinutesLessThan10)
        {
            Utilities* utilities = new Utilities();
            string expected = "00:03:00.000"s;
            string actual = utilities->FormatMilliseconds(180000);
            Assert::AreEqual(expected, actual);
        }

        
        TEST_METHOD(HoursLessThan10)
        {
            Utilities* utilities = new Utilities();
            string expected = "02:00:00.000"s;
            string actual = utilities->FormatMilliseconds(7200000);
            Assert::AreEqual(expected, actual);
        }
        
        TEST_METHOD(MillisecondsNotMoreThan999)
        {
            Utilities* utilities = new Utilities();
            string expected = "00:00:01.000"s;
            string actual = utilities->FormatMilliseconds(1000);
            Assert::AreEqual(expected, actual);
        }
        
        TEST_METHOD(SecondsLessThan60)
        {
            Utilities* utilities = new Utilities();
            string expected = "00:01:00.000"s;
            string actual = utilities->FormatMilliseconds(60000);
            Assert::AreEqual(expected, actual);
        }
        
        TEST_METHOD(MinutesLessThan60)
        {
            Utilities* utilities = new Utilities();
            string expected = "01:00:00.000"s;
            string actual = utilities->FormatMilliseconds(3600000);
            Assert::AreEqual(expected, actual);
        }

        
        TEST_METHOD(HoursMoreThan99)
        {
            Utilities* utilities = new Utilities();
            string expected = "100:00:00.000"s;
            string actual = utilities->FormatMilliseconds(360000000);
            Assert::AreEqual(expected, actual);
        }
    };
}
