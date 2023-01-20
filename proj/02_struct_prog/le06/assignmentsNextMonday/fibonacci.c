/*
    This program writes the fibonacci sequence with the help of a function that returns the next number in the sequence.
*/
#include <stdio.h>
#include "fibonacciNext.h"

int main()
{
    int amount;
    printf("How many numbers from the fibonacci sequence do you want to see? ");
    scanf("%d", &amount);
    if (amount < 1)
    {
        printf("Invalid input.");
    }
    else
    {
        printf("This is the %d first numbers in the fibonacci sequence: \n", amount);
        if (amount == 1)
        {
            printf("0");
        }
        else{
            // Prints the first 2 numbers since they are given.
            printf("0 1 ");

            // Prints the rest of the numbers in the sequence.
            for (int i = 0; i < amount - 2; i++)
            {
                printf("%d ", fibonacciNext());
            }
        }
    }
    printf("\n\n");
    return 0;
}