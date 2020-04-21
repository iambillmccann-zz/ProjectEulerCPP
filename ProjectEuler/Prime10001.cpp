#include <string>
#include <list>

#include "Problems.h"
#include "Utilities.h"


using namespace std;
using namespace EulerLibrary::Problems;
using namespace EulerLibrary;

string Prime10001::Compute(void)
{
	MathLibrary* mathLibrary = new MathLibrary();
	list<long long> primeNumbers = mathLibrary->GetPrime(110000);
    long long result = 0;
    int count = 0;

    for (auto iterator = primeNumbers.begin(); iterator != primeNumbers.end(); ++iterator) {
        result = *iterator;
        if (++count >= 10001) break;
    };

    return to_string(result);
}