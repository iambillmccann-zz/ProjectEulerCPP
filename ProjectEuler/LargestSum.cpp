#include <string>

#include "Problems.h"
#include "Utilities.h"
#include <iostream>


using namespace std;
using namespace EulerLibrary::Problems;
using namespace EulerLibrary;

const int NUMBER_SIZE = 50;
const int SET_SIZE = 100;

struct Digits
{
    int array[NUMBER_SIZE];
};

Digits GetDigits(string number)
{
    Digits digits;

    return digits;
}

string LargestSum::Compute(void)
{
    int matrix[SET_SIZE][NUMBER_SIZE];
    Digits digits;
    digits = GetDigits("37107287533902102798797998220837590246510135740250");
    matrix[0] = digits.array;


    return "Hello World";
}