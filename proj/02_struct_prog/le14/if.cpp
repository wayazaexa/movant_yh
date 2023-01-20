/*
--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      if.cpp
Description:    Random assignment, check if a number is positive or negative.
Date:           2022-10-17
--------------------------------------------------------------------------------
*/

#include <iostream>

int main (int argc, const char* argv[])
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number > 0)
        std::cout << number << " is a positive number.\n\n";
    else if (number < 0)
        std::cout << number << " is a negative number.\n\n";
    else
        std::cout << "0 is neither positive nor negative, or both, depending on how you feel about it.\n\n";
    
    return 0;
}
