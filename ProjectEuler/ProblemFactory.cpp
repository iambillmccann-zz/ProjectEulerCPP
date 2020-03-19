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
		default : return new GenericSolution();
	}
}
