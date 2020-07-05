#pragma once
#include <string>
#include <list>

using namespace std;

namespace EulerLibrary
{
	class MathLibrary
	{
	public:
		long long ArithemticSeries(long long numberOfTerms, long long firstTerm, long long lastTerm);
		list<long long> GetDivisors(long long number);
		list<long long> GetPrime(long long max);
		list<long long> GetFactors(long long number);
		list<long long> GetFactors(long long number, list<long long> primeNumbers, list<long long> factors);
		bool IsMultiple(long long value, long long divisor);
		long long ReverseDigits(long long number);
		long long Square(long long number);
		long long SumNatural(long long number);
		long long SumNaturalSquares(long long number);
		long long SeriesProduct(list<long long> numbers);
		long long SeriesSum(list<long long> numbers);
	};

	class Utilities
	{
	public:
		string FormatMilliseconds(double totalMilliseconds);
	};

}
#pragma once
