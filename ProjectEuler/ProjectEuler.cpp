// ProjectEuler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>

#include "Problems.h"

using namespace std;
using namespace EulerLibrary::Problems;

string kQuitString = "Q";
const int kLastProblem = 1;

int GetUserInput();

// to_upper is a function to convert a string to all upper case.
// This function is used in conjunction with for_each to convert
// each individual character.
//
// Args:
//    ch: The character to convert to upper case
void to_upper(char& ch) {
    ch = toupper(static_cast<unsigned char>(ch));
}

// checkUserInput will validate the user's input. This is a very redimentary
// validation method. It checks three things ...
// 1. Checks for the letter "Q"
// 2. Checks for an integer
// 3. Checks that the integer is positive
// 4. Checks that the integer is no greater than the last problem solved.
// These checks assume that problems are solved in order.
// Note: If the user enters "Q", a minus one is returned to the caller.
//
// Args:
//     userInput: A string entered by the user.
//
// Returns:
//     A valid integer result.
int CheckUserInput(string user_input)
{
    int result = -1;

    for_each(user_input.begin(), user_input.end(), to_upper);
    if (user_input.compare(kQuitString) == 0) return result;

    try {
        result = stoi(user_input);
        if (result < 1)
        {
            cout << "\nBTW, problem numbers are positive integers.\n";
            return GetUserInput();
        }
        else if (result > kLastProblem) {
            cout << "\nI have only completed problems 1 through " << kLastProblem << "\n";
            return GetUserInput();
        }
        return result;
    }
    catch (exception) {
        cout << "\nSorry but I did not understand that. Please type the problem number or Q to quit.\n";
        return GetUserInput();
    }
}

// getUserInput is a simple method for reading from the console.
//
// Returns: 
//     A string that represents the user's input.
int GetUserInput()
{
    string user_input;

    cout << "\nWhat problem shall I run? Or type 'Q' to quit. ";
    getline(cin, user_input);
    
    return CheckUserInput(user_input);
}

//
// This is the main program
//
int main()
{
    int problem_number = 0;
    ProblemFactory* problem_factory = new ProblemFactory();
    IEulerSolution* solution = NULL;

    //ToDo: instantiate a factory to instantiate the problem solution
    //ToDo: instantiate classes for the stop watch

    problem_number = GetUserInput();
    while (problem_number > 0) {
        cout << "\nThe problem number is " << problem_number;

        solution = problem_factory -> GetSolution(problem_number);
        cout << "\nSolution to problem " << problem_number << " = " << solution->Compute();
        delete solution;

        problem_number = GetUserInput();
    }
    delete problem_factory;
}
