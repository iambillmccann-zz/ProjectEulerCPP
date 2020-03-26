#include <string>
#include <chrono>
#include <list>

#include "Problems.h"
#include "Utilities.h"

using namespace std;
using namespace EulerLibrary::Problems;
using namespace EulerLibrary;

const long long kValue = 600851475143;
const long kMaxPrime = 10000;

string LargestPrimeFactor::Compute(void)
{
	MathLibrary* mathLibrary = new MathLibrary();
	return to_string(mathLibrary->GetFactors(kValue).back());
}