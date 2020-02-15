#include <string>

#include "Problems.h"
#include "Utilities.h"

using namespace std;
using namespace EulerLibrary::Problems;
using namespace EulerLibrary;

const long long kLimit = 4000000;

string EvenFibonacci::Compute(void)
{
	MathLibrary* mathLibrary = new MathLibrary();

    long long result = 2;
    long long term1 = 1;
    long long term2 = 2;
    long long sum;

    sum = term1 + term2;
    while (sum < kLimit)
    {
        if (mathLibrary -> IsMultiple(sum, 2)) result += sum;
        term1 = term2;
        term2 = sum;
        sum = term1 + term2;
    }

	return to_string(result);
}