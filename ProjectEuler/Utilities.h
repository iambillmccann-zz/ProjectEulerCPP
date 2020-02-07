#pragma once
#include <string>

using namespace std;

namespace EulerLibrary
{
	class MathLibrary
	{
	public:
		long ArithemticSeries(long numberOfTerms, long firstTerm, long lastTerm);
	};

	class Utilities
	{
	public:
		string FormatMilliseconds(double totalMilliseconds);
	};

}
#pragma once
