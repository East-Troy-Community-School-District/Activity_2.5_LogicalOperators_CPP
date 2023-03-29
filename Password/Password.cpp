/*
Password
Pawelski
3/29/2023
C++
*/

#include <iostream>
#include <string>

int main()
{
    std::string username, password;
    std::cout << "Please enter your credientials.\n";
    std::cout << "Username >> ";
    std::cin >> username;
    std::cout << "Password >> ";
    std::cin >> password;
    if (username == "username" && password == "password")
    {
        std::cout << "Login successful!\n";
    }
    else
    {
        std::cout << "Login failed!\n";
    }
    return 0;
}
