#include <string>
#include <chrono>

#include "Problems.h"
#include "Utilities.h"

using namespace std;
using namespace EulerLibrary::Problems;
using namespace EulerLibrary;

const long long kRangeStart = 1;
const long long kRangeStop = 1000;

long long Multiple3or5::NumberOfTerms(long long rangeStart, long long rangeStop, long long difference) { return (rangeStop - rangeStart) / difference; }
long long Multiple3or5::LastTerm(long long numberOfTerms, long long firstTerm, long long difference) { return firstTerm + difference * (numberOfTerms - 1); }

string Multiple3or5::Compute(void)
{
	MathLibrary* mathLibrary = new MathLibrary();

	long long numberOfTerms3 = NumberOfTerms(kRangeStart, kRangeStop, 3);
	long long numberOfTerms5 = NumberOfTerms(kRangeStart, kRangeStop, 5);
	long long numberOfTerms15 = NumberOfTerms(kRangeStart, kRangeStop, 15);

	long long sum3 = mathLibrary->ArithemticSeries(numberOfTerms3, 3, LastTerm(numberOfTerms3, 3, 3));
	long long sum5 = mathLibrary->ArithemticSeries(numberOfTerms5, 5, LastTerm(numberOfTerms5, 5, 5));
	long long sum15 = mathLibrary->ArithemticSeries(numberOfTerms15, 15, LastTerm(numberOfTerms15, 15, 15));

	return to_string(sum3 + sum5 - sum15);
}