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
		default : return new GenericSolution();
	}
}
