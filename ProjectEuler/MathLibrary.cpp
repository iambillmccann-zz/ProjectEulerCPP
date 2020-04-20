#include <string>
#include <math.h>
#include <list>
#include <algorithm>

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
long long MathLibrary::ArithemticSeries(long long numberOfTerms, long long firstTerm, long long lastTerm)
{
	return numberOfTerms * (firstTerm + lastTerm) / 2;
}

//
// GetPrime returns a list of prime number up to a given value
//
// Args:
//   max              The highest value for the primes
//
// Returns:
//   The list of prime numbers
list<long long> EulerLibrary::MathLibrary::GetPrime(long long max)
{
    list<long long> primeNumbers;

    for (long long number = 2; number <= max; number++)
    {
        bool isPrime = true;
        for(auto iterator = primeNumbers.begin(); iterator != primeNumbers.end(); ++iterator) {
            long long divisor = *iterator;
            if (divisor * divisor > number) break;
            if (IsMultiple(number, divisor)) isPrime = false;
        };
        if (isPrime) primeNumbers.push_back(number);
    }

    return primeNumbers;
}

//
// This GetFactors factors calls the overloaded version with a list of prime numbers and an empty list for
// accumulating the factors.
//
// Args:
//   number      The number to be factored
//
// Returns:
//   The list of prime factors
list<long long> EulerLibrary::MathLibrary::GetFactors(long long number)
{
    list<long long> factors = GetFactors(number, GetPrime(10000), list<long long>());
    return factors;
}

//
// GetFactors returns a list of prime factors for a number. This works by using recursion. Each time it is called, the
// number to be factored is divided by the current factor.
//
// Args:
//   number               The number to be factored
//   primeNumbers         A list of prime numbers
//   factors              A list where the factors can be accumulated
//
list<long long> EulerLibrary::MathLibrary::GetFactors(long long number, list<long long> primeNumbers, list< long long> factors)
{
    for (auto iterator = primeNumbers.begin(); iterator != primeNumbers.end(); ++iterator) {
        long long primeNumber = *iterator;
        if (primeNumber * primeNumber > number) {
            factors.push_back(number);
            return factors;
        }
        if (IsMultiple(number, primeNumber)) {
            factors.push_back(primeNumber);
            return GetFactors(number / primeNumber, primeNumbers, factors);
        };
    };
    return list<long long>(); // this is dead code that should never be executed.
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
bool MathLibrary::IsMultiple(long long value, long long divisor)
{
	if (divisor == 0) return false;
	if (value % divisor == 0) return true;
	return false;
}

//
// Reverse the order of digits in an integer such that 1234 becomes 4321
//
// Args:
//  number          The number to reverse
//
// Returns:
//  The number with digits reversed
long long MathLibrary::ReverseDigits(long long number)
{
    long long result = 0;
    long long workNumber = number;

    while (workNumber > 0)
    {
        long remainder = workNumber % 10;
        result = (result * 10) + remainder;
        workNumber /= 10;
    }

    return result;
}

long long MathLibrary::Square(long long number)
{
    return number * number;
}

//
// Compute the sum of natural numbers (positive integers starting at 1)
//
// Args:
//   number      The last number of the sequence to sum
//
// Returns:
//   The sum of the natural numbers up to and including number
//
long long MathLibrary::SumNatural(long long number)
{
    long long result = 0;
    for (long long sequence = 1; sequence <= number; sequence++) { result += sequence; }
    return result;
}

//
// Compute the sum of squares of natural numbers
//
// Args:
//   number       The last number of the sequence to sum
//
// Returns:
//   The sum of the squares of the natural numbers up to and including number
//
long long MathLibrary::SumNaturalSquares(long long number)
{
    long long result = 0;
    for (long long sequence = 1; sequence <= number; sequence++) result += Square(sequence);
    return result;
}

//
// Compute the total product of a list
//
// Args:
//   numbers       A list of integers
//
// Returns:
//   The product of the numbers in the list as a * b * c * d * ...
//
long long MathLibrary::SeriesProduct(list<long long> numbers)
{
    long long result = 1;
    for (long long number : numbers) result *= number;
    return result;
}

//
// Compute the summation of a list
//
// Args:
//   numbers        A list of integers
//
// Returns:
//  The sum of the numbers in the list as a + b + c + d + ...
//
long long MathLibrary::SeriesSum(list<long long> numbers)
{
    long long result = 0;
    for (long long number : numbers) result += number;
    return result;
}