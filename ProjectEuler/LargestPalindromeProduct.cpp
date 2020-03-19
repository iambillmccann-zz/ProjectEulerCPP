#include <string>
#include <chrono>
#include <list>

#include "Problems.h"
#include "Utilities.h"

using namespace std;
using namespace EulerLibrary::Problems;
using namespace EulerLibrary;

string LargestPalindromeProduct::Compute(void)
{
	MathLibrary* mathLibrary = new MathLibrary();
    long long result = 0;

    for (long long number1 = 100; number1 < 1000; number1++)
    {
        for (long long number2 = 100; number2 < 1000; number2++)
        {
            long long product = number1 * number2;
            if ( (mathLibrary->ReverseDigits(product) == product) & (product > result) )
                result = product;
        }
    }
    return to_string(result);
}