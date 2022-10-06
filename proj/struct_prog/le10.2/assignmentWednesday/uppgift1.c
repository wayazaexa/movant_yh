/*
Konstruera en funktion som skriver ut alla elementen i ett heltalsfält.
Som parametrar får funktionen en pekare till fältet och ett heltal som anger hur många element det finns i fältet.

--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      uppgift1.c
Description:    This program prints the contents of an array of integers using a function.
Date:           2022-10-06
--------------------------------------------------------------------------------
*/
#include <stdio.h>

void printIntArray(int *, int);

int main()
{
    int array[] = {1, 3, 5, 7, 9, 11, 13};
    int size = sizeof(array) / sizeof(array[0]);
    printf("The array contains the numbers: ");

    printIntArray(array, size);
    printf("\n\n");

    return 0;
}

/*
Inputs: A pointer to an array, an integer containing the size of the array.
Outputs: N/A.
This function prints every element of an array of integers.
*/
void printIntArray(int *intArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *intArray++);
    }
}
