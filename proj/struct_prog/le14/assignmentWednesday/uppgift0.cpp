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
#include <cctype>

int main(int argc, char const *argv[])
{
    char character;
    std::cout << "Enter a character: ";
    character = getchar();

    // Check with the help of functions in the library 'cctype' whether the
    // character is alphabetic, a digit, or special character.
    if (isalpha(character))
    {
        std::cout << "This is an alphabetic character.\n\n";
    }
    else if (isdigit(character))
    {
        std::cout << "This is a number.\n\n";
    }
    else
    {
        std::cout << "This is a special character.\n\n";
    }

    return 0;
}
