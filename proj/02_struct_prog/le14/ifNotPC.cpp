/*
--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      ifNotPC.cpp
Description:    Random assignment, check if a person is a dwarf, giant, or
                normal (very non-pc, but w/e). Must use a typedef.
Date:           2022-10-17
--------------------------------------------------------------------------------
*/

#include <iostream>

int main (int argc, const char* argv[])
{
    typedef int thisIsAnInteger;
    thisIsAnInteger height;
    std::cout << "Enter a person's height in cm: ";
    std::cin >> height;

    if (height > 220)
        std::cout << "This person is a giant.\n\n";
    else if (height < 147)
        std::cout << "This person is a dwarf.\n\n";
    else
        std::cout << "This person is normal.\n\n";
    
    return 0;
}
