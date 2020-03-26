#include <string>
#include <chrono>
#include <list>

#include "Problems.h"
#include "Utilities.h"

using namespace std;
using namespace EulerLibrary::Problems;
using namespace EulerLibrary;

string SmallestMultiple::Compute(void)
{
    MathLibrary* mathLibrary = new MathLibrary();
    long long result = 0;
    long long max = 20;
    bool notDone = true;

    while (notDone)
    {
        result += max * (max - 1);
        long long trial = max - 2;
        while (mathLibrary->IsMultiple(result, trial--))
            if (trial == 1)
            {
                notDone = false;
                break;
            }
    }

    return to_string(result);
}