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

//
// IsMultiple checks that a number is an even multiple of another
//
// Args:
//  value            The value to check
//  divisor          The number to divide into the value
//
// Returns:
//   True is the numbers divide evenly, otherwise false
//
bool MathLibrary::IsMultiple(long value, long divisor)
{
	if (divisor == 0) return false;
	if (value % divisor == 0) return true;
	return false;
}