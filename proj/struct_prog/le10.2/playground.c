/*

--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      playground.c
Description:    This is my playground to use during lectures if I feel a need to test something out.
Date:           2022-10-06
--------------------------------------------------------------------------------
*/

#include <stdio.h>

void swap(int, int);
void swapWithPointers(int *, int *);

int main ()
{
    /*
    // Playing with pointers, hopefully showing clearly what's going on.
    int value = 25;
    int *pValue = &value;

    printf("Address of value (&value): %p\n", &value);
    printf("Address of pValue (&pValue): %p\n\n", &pValue);

    printf("Value of value (value): %d\n", value);
    printf("Value of pValue (pValue) / Address that pValue points to (in this case address of value): %p\n\n", pValue);

    printf("Value at the address pValue points to (*pValue): %d\n\n", *pValue);
    */

    // Showing that swaps doesn't work without pointers.
    int x = 1, y = 2;
    
    // Print x and y.
    printf("First print of x and y: %d %d\n\n", x, y);
    
    // Try to swap without using pointers.
    swap(x, y);
    // Print x and y - Oops!
    printf("Print after regular swap: %d %d\n", x, y);
    printf("Oops! That didn't work! Let's try it again, but using pointers this time!\n\n");
    
    // Swap properly using pointers.
    swapWithPointers(&x, &y);
    // Print x and y - Gets expected result.
    printf("Print after swap using pointers: %d %d\n\n", x, y);

    return 0;
}

/*
Inputs: Two integers to be swapped.
Output: N/A.
This function will try to swap the values of the inputs, but will fail because it is defined as Call By Value.
*/
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

/*
Inputs: Two pointers to integers to be swapped.
Output: N/A.
This function will swap the values that the inputs point to. Works as it is Call By Reference.
*/
void swapWithPointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
