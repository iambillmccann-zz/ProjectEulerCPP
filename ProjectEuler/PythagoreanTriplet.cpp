#include <string>
#include <list>

#include "Problems.h"
#include "Utilities.h"
#include <iostream>


using namespace std;
using namespace EulerLibrary::Problems;
using namespace EulerLibrary;

// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// a^2 + b^2 = c^2
// For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

string PythagoreanTriplet::Compute(void)
{
    MathLibrary* mathLibrary = new MathLibrary();
    long long result = 0;

    for (long long a = 1; a <= 333; a++)
    {
        bool done = false;
        long long b = a + 1;                // b must be greater than a
        while (!done)
        {
            long long c = 1000 - (a + b);   // a + b + c must equal 1000
            if (mathLibrary->Square(a) + mathLibrary->Square(b) == mathLibrary->Square(c)) return to_string( (a * b * c) );
            if (++b >= c) done = true;      // c must be greater than b
        }
    }
    return to_string(result);
}