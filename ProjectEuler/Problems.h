#pragma once
#include <string>

using namespace std;

namespace EulerLibrary
{
	namespace Problems
	{
		
		class IEulerSolution
		{
		public:
			virtual string Compute(void);
		};

		//
		// The generic solution class. The factory will use this as the default solution.
		//
		// Returns:
		//    A message indicating that no solution exists.
		class GenericSolution : public IEulerSolution 
		{
		public:
			string Compute(void);
		};

		//
		// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
		// Find the sum of all the multiples of 3 or 5 below 1000.
		//
		// Returns:
		//    return the answer to the problem of Multiples of 3 or 5.
		class Multiple3or5 : public IEulerSolution
		{
		private:
			long NumberOfTerms(long rangeStart, long rangeStop, long difference);
			long LastTerm(long numberOfTerms, long firstTerm, long difference);

		public:
			string Compute(void);
		};

		//
		// The ProblemFactory class using the factory pattern to return the solution to a 
		// given problem number.
		//
		// Args:
		//    problemNumber   The number of the problem.
		//
		// Returns:
		//    The class that will solve the problem.
		class ProblemFactory
		{
		public:
			IEulerSolution* GetSolution(int problemNumber);
		};

	}

}




