/*
Biggest Number
Pawelski
3/29/2023
C++
*/

#include <iostream>

int main()
{
    int number1, number2, number3;
    std::cout << "Enter a number >> ";
    std::cin >> number1;
    std::cout << "Enter another number >> ";
    std::cin >> number2;
    std::cout << "Enter another number >> ";
    std::cin >> number3;
    if (number1 >= number2 && number1 >= number3)
    {
        std::cout << "The biggest number is " << number1 << std::endl;
    }
    if (number2 >= number1 && number2 >= number3)
    {
        std::cout << "The biggest number is " << number2 << std::endl;
    }
    if (number3 >= number1 && number3 >= number2)
    {
        std::cout << "The biggest number is " << number3 << std::endl;
    }
    return 0;
}
