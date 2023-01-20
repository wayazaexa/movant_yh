/*
--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      uppgift0.cpp
Description:    Write a C++ program to check whether a character is an alphabet,
                digit or special character. 
Date:           2022-10-17
--------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    unsigned int number;
    std::cout << "Input a positive number (tables will be calculated upto this number): ";
    std::cin >> number;
    std::cout << "Multiplication tables from 1 to " << number << "\n";
    
    for (int i = 1; i <= 10; i++)
    {
        // For each row, up until 'number', print the formula followed by
        // ", " as a delimiter.
        for (int j = 1; j < number; j++)
        {
            std::cout << j << " x " << std::setw(2) << i << " = " << std::setw(2) << j * i << ", ";
        }
        // Print the last bit without the delimiter.
        std::cout << number << " x " << std::setw(2) << i << " = " << std::setw(2) << number * i << "\n";
    }

    std::cout << "\n";
    return 0;
}
