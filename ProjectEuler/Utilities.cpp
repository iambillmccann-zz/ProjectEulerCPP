#include <string>
#include <math.h>

#include "Problems.h"
#include "Utilities.h"

using namespace std;
using namespace EulerLibrary;

//
// The FormatMilliseconds method takes a long integer that represents a
// elasped time in milliseconds and returns a HH:MM:SS.mmm string.
//
// Args:
//    totalMilliseconds  the number of milliseconds
//
// Return: 
//    the formatted string
//
string Utilities::FormatMilliseconds(double totalMilliseconds)
{
	long milliseconds = (long)floor(totalMilliseconds);

    long totalseconds = milliseconds / 1000;
    long seconds = totalseconds % 60;
    long totalminutes = totalseconds / 60;
    long minutes = totalminutes % 60;
    long hours = totalminutes / 60;

    string formatSeconds = to_string(seconds);
    string formatMinutes = to_string(minutes);
    string formatHours = to_string(hours);
    string formatMilliseconds;

    if (milliseconds < 10)       formatMilliseconds = "00" + to_string(milliseconds);
    else if (milliseconds < 100) formatMilliseconds = "0" + to_string(milliseconds);
    else                         formatMilliseconds = to_string(milliseconds);


    if (seconds < 10) formatSeconds = "0" + formatSeconds;
    if (minutes < 10) formatMinutes = "0" + formatMinutes;
    if (hours < 10) formatHours = "0" + formatHours;

    return formatHours + ":" + formatMinutes + ":" + formatSeconds + "." + formatMilliseconds;
}