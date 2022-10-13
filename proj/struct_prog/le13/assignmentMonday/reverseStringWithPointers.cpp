/*
Skriv en funktion som vänder på tecknen i en textsträng med hjälp av två pekare.
Den enda parametern till funktionen skall vara en pekare till strängen.

--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      uppgift2.c
Description:    This program reverses a string with the help of a function and displays the result.
Date:           2022-10-06
--------------------------------------------------------------------------------
*/
#include <iostream>
#include <string>

using namespace std;

void flipString(string &);

int main()
{
    // The source string is the string "This is a string!" backwards, so that is the expected result.
    string myString = "!gnirts a si sihT";
    cout << "Before reversing, the string looks like this: \"" << myString << "\"\n";
    
    flipString(myString);
    cout << "After reversing, the string looks like this: \"" << myString << "\"\n\n";

    return 0;
}

/*
Parameters: A pointer to a string.
Output: N/A.
This function reverses a string using two iterators and a temporary variable..
*/
void flipString(string &src)
{
    // forwardIt points to the start of the string.
    string::iterator forwardIt = src.begin();
    // reverseIt points to "one past the last character" in the string.
    string::iterator reverseIt = src.end();
    // So we decrement it once so it points to the last character in the string.
    reverseIt--;
    // This will hold a value while we swap.
    char temp;
    
    while (forwardIt < reverseIt)
    {
        // Here we swap the value that the two iterators points to while also incrementing and decrementing the iterators respectively.
        temp = *reverseIt;
        *reverseIt-- = *forwardIt;
        *forwardIt++ = temp;
    }
}
