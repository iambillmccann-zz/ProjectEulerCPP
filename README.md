# ProjectEuler
Project Euler was started by Colin Hughes (a.k.a. euler) in October 2001 as a sub-section on mathschallenge.net. Who could have known how popular these types of problems would turn out to be? Since then the membership has continued to grow and Project Euler moved to its own domain in 2006.

## What is this?
It is important to code every day to keep our skills sharp. I have created this repository for my solutions to Project Euler challenges. This particular repository contains my solutions written in C++. I have similar repositories for Python, Rust, C#, Scala, and Java.

## Structure of this code
This application runs as a console application. It is build for C++ running on Windows 10. The solution is organized into two folders and two namespaces. The folders are:

- ** ProjectEuler ** this contains the main program (ProjectEuler.cpp) and the source files of the Problems namespace.
- ** Tests ** these are the unit tests for the solution.

## Main Program
The main program prompts the user for a problem number, then runs the appropriate problem and reprompts the user. To end the program the user types "q" and presses enter.

The main program calls functions to validate the user's input, and then uses a factory pattern to obtain the class for the selected problem. Run times are tracked and reported by the main program.

## Namespaces
The following are the project namespaces:

### ProjectEuler
This is the highest level namespace for the program. The main program is contained within *Global Functions and Variables*.

### ProjectEuler / EulerLibrary
The MathLibrary contains the algorithms needed to solve the problems. There are two classes in this namespace, these are:

- ** MathLibrary ** this contains match functions, such as finding lowest common denominators or prime numbers.
- ** Utilities ** this contains miscellaneous utilities, such as formatting of milliseconds as HH:MM:SS:mmm.

The Problems namespace is also contained here.

### ProjectEuler / EulerLibrary / Problems
The Problems namespace contains the solution to the Project Euler problems. Each problem has its' own source file. In addition, the factory class (ProblemFactory.cpp) is here. The factory accepts an integer problem number and returns the appropriate class to solve that problem. The problems are based on the interface *IEulerSolution*.

### Tests
Unit test classes have their own namespace.