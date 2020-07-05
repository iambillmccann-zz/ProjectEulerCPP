#include <string>

#include "Problems.h"

using namespace std;
using namespace EulerLibrary::Problems;

IEulerSolution* ProblemFactory::GetSolution(int problem_number)
{
	switch (problem_number)
	{
		case 1: return new Multiple3or5();
		case 2: return new EvenFibonacci();
		case 3: return new LargestPrimeFactor();
		case 4: return new LargestPalindromeProduct();
		case 5: return new SmallestMultiple();
		case 6: return new SumSquareDifference();
		case 7: return new Prime10001();
		case 8: return new LargestProductSeries();
		case 9: return new PythagoreanTriplet();
		case 10: return new SummationPrimes();
		case 11: return new LargestProductGrid();
		case 12: return new HighlyDivisibleTriangle();
		default : return new GenericSolution();
	}
}
