/*
--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      playground.cpp
Description:    This is my playground to use during lectures if I feel a need
                to test something out.
Date:           2022-10-13
--------------------------------------------------------------------------------
*/

#include <iostream>
#include <climits>
#include <string>
#include <cmath>

int main (int argc, char* argv[])
{
    int x;
    std::string fullName;
    // endl preforms a flush, making it slow. Use \n as standard.
    std::cout << "Oh hi Mark!" << std::endl;
    std::cout << "Enter a number: ";
    std::cin >> x;

    // Flush the buffer
    while (getchar() != '\n'){}

    std::cout << "You entered: " << x << std::endl << "\nEnter your full name: ";
    std::getline(std::cin, fullName);
    std::cout << "Hello " << fullName << "\n\n";

    return 0;
}
