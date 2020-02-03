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

		class GenericSolution : public IEulerSolution 
		{
		public:
			string Compute(void);
		};

		class Multiple3or5 : public IEulerSolution
		{
		public:
			string Compute(void);
		};

		class ProblemFactory
		{
		public:
			IEulerSolution* GetSolution(int problemNumber);
		};

	}
}




