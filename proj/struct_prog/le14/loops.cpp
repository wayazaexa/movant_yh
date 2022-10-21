/*
--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      loops.cpp
Description:    Random assignment, must use typedef. I'm going to make it
                as unreadable as I can, just because I'm in a mood.
Date:           2022-10-17
--------------------------------------------------------------------------------
*/

#include <iostream>

int main (int argc, const char* argv[])
{
    typedef int i;
    i a, b = 0, j = 0;

    do
    {
        std::cout << (j++)+1 << ": ";
        std::cin >> a;
        b += a;
    } while (j < 10);

    std::cout << b << "\t" << b / 10 << "\n\n";
    
    return 0;
}
