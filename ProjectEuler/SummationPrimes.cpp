#include <string>
#include <list>

#include "Problems.h"
#include "Utilities.h"
#include <iostream>


using namespace std;
using namespace EulerLibrary::Problems;
using namespace EulerLibrary;


string SummationPrimes::Compute(void)
{
    MathLibrary* mathLibrary = new MathLibrary();
    list<long long> primeNumbers = mathLibrary->GetPrime(2000000);
    return to_string( mathLibrary->SeriesSum(primeNumbers) );
}