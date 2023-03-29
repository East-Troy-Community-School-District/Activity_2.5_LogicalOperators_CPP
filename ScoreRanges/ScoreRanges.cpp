/*
Score Ranges
Pawelski
3/29/2023
C++

Instructions:
Run the program and see what it does. You may even
want to put in a breakpoint and run the program
line-by-line to see how it executes! How does the
program use the && and || operators? In order for
the && operator to return true, what must happen?
In order for the || operator to return true, what
must happen?

Modify the program so that it also checks for the
A+ (97 - 100), A- (90 - 93), B+ (87 - 90), A- (80 - 83),
C+ (77 - 80), C- (70 - 73), D+ (67 - 70), and
D- (60 - 63).
*/

#include <iostream>

int main()
{
    double points_earned, total_points, score;
    std::cout << "How many points did you earn on the test? >> ";
    std::cin >> points_earned;
    std::cout << "What was the total amount of points on the test? >> ";
    std::cin >> total_points;
    score = points_earned / total_points * 100;
    if (score < 0 || score > 100)
    {
        std::cout << "Invalid!\n";
    }
    else if (90 <= score && score <= 100)
    {
        std::cout << "A\n";
    }
    else if (80 <= score && score < 90)
    {
        std::cout << "B\n";
    }
    else if (70 <= score && score < 80)
    {
        std::cout << "C\n";
    }
    else if (60 <= score && score < 70)
    {
        std::cout << "D\n";
    }
    else
    {
        std::cout << "F\n";
    }
    return 0;
}
