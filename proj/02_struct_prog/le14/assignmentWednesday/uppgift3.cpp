/*
--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      uppgift0.cpp
Description:    Write a program in C++ to display the pattern like right angle
                triangle with a number. 
Date:           2022-10-17
--------------------------------------------------------------------------------
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    int rows;
    std::cout << "How many rows do you want to print? ";
    std::cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        // For each row, print out all numbers up to and including
        // the number of the row. 
        for (int j = 1; j <= i; j++)
        {
            std::cout << j;
        }
        std::cout << "\n";
    }

    std::cout << "\n";
    return 0;
}
