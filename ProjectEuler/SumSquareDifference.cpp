#include <string>
#include <chrono>
#include <list>

#include "Problems.h"
#include "Utilities.h"

using namespace std;
using namespace EulerLibrary::Problems;
using namespace EulerLibrary;

string SumSquareDifference::Compute(void)
{
    MathLibrary* mathLibrary = new MathLibrary();
    long long number = 100;
    return to_string(mathLibrary->Square(mathLibrary->SumNatural(number)) - mathLibrary->SumNaturalSquares(number));
}