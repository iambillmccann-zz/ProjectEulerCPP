#include <string>
#include <math.h>

#include "Utilities.h"

using namespace std;
using namespace EulerLibrary;

//
// ArithmeticSeries computes the sum of an arithmetic progression
//
// Args:
//   numberOfTerms   The number of terms in the series
//   firstTerms      The first term of the series
//   lastTerm        The last term of the series
//
// Returns:
//   The sum of the arithmetic progression using the formula n*(a+b)/2
//
long MathLibrary::ArithemticSeries(long numberOfTerms, long firstTerm, long lastTerm)
{
	return numberOfTerms * (firstTerm + lastTerm) / 2;
}