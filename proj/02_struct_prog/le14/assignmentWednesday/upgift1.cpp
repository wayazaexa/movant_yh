/*
--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      upgift1.cpp
Description:    Write a program in C++ to display the multiplication table(Ten
                times) of a given integer.
Date:           2022-10-17
--------------------------------------------------------------------------------
*/
#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int number;
    std::cout << "Input the number (table to be calculated): ";
    std::cin >> number;

    for (int i = 1; i <= 10; i++)
    {
        std::cout << number << " x " << std::setw(2) << i << " = " << std::setw(2) << number * i << "\n";
    }

    std::cout << "\n";
    return 0;
}
