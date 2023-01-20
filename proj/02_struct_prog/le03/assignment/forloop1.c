/*
1: Skriv ett program som skriver ut ett tal från 1-50 använd en for loop.
*/
#include <stdio.h>

int main()
{
    printf("Printing 1-50:\n");

    for (int i = 1; i <= 50; i++)
    {
        printf("%d\n", i);
    }
    printf("\n");
    return 0;
}
