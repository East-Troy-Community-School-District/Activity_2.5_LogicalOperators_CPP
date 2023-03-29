/*
Pop Quiz
Pawelski
3/29/2023
C++

Instructions:
What values can you enter to get the message "Correct!"?
Why?

Modify the condition so that it looks like this...
user_answer == "true" || "T"

The program no longer works as intended! Why? Modify 
the program so that the user can enter "True" and "t"
and still get the message "Correct!". How did we
accomplish this modification?
*/

#include <iostream>
#include <string>

int main()
{
    std::string user_answer;
    std::cout << "True or false. Elephants are grey. >> ";
    std::cin >> user_answer;
    if (user_answer == "true" || user_answer == "T")
    {
        std::cout << "Correct!\n";
    }
    else
    {
        std::cout << "Incorrect! Elephants are grey.\n";
    }
    return 0;
}
