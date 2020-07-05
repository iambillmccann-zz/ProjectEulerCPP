#include <string>
#include <list>

#include "Problems.h"
#include "Utilities.h"
#include <iostream>


using namespace std;
using namespace EulerLibrary::Problems;
using namespace EulerLibrary;


string HighlyDivisibleTriangle::Compute(void)
{
    MathLibrary* mathLibrary = new MathLibrary();

    bool done = false;
    long long sequence = 1;
    long long triangle = 0;
    long long minimum = 500;

    while (!done)
    {
        triangle += sequence;
        list<long long> divisors = mathLibrary->GetDivisors(triangle);
        if (divisors.size() > minimum) done = true;
        ++sequence;
    }

    return to_string(triangle);
}