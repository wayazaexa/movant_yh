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
#include <stdio.h>
#include <string.h>

void flipString(char *);

int main()
{
    // The source string is the string "This is a string!" backwards, so that is the expected result.
    char string[] = "!gnirts a si sihT";
    
    flipString(string);
    printf("%s\n\n", string);

    return 0;
}

/*
Parameters: A pointer to a string.
Output: N/A.
This function reverses a string using two iterators, a temporary variable, and a variable containing the size of the source for readability.
*/
void flipString(char *src)
{
    int size = strlen(src);
    // forwardIt points to the start of the string.
    char *forwardIt = src;
    // reverseIt points to the end of the string.
    char *reverseIt = src + size - 1;
    // This will hold a value while we swap.
    char temp;

    // We iterate over half the length of the string as that's all we need.
    for (int i = 0; i < size / 2; i++)
    {
        // Here we swap the value that the two iterators points to while also incrementing and decrementing the iterators respectively.
        temp = *reverseIt;
        *reverseIt-- = *forwardIt;
        *forwardIt++ = temp;
    }
    
    /*
    // This was my first attempt, using one extra pointer as iterator (as I interpreted the pointer to the string as the second pointer),
    // plus some pointer arithmetic. This isn't as readable though, so I realised that you probably wanted us to use two iterators.
    // I still wanted to show it as I think pointer arithmetics are essential to the use of pointers.
    // One temporary variable to hold the value while we swap will still have to be used unless I've missed something.
    int size = strlen(src);
    // Set the iterator to the last element in the string. This will iterate over the string backwards.
    char *pIterator = src + size - 1;
    // This will hold a value while we swap.
    char temp;

    // We iterate over half the length of the string as that's all we need.
    for (int i = 0; i < size / 2; i++)
    {
        // Here we swap the value that the iterator points to with the value that (src + i) points to while also decrementing the iterator.
        temp = *pIterator;
        *pIterator-- = *(src + i);
        *(src + i) = temp;
    }
    */
}
