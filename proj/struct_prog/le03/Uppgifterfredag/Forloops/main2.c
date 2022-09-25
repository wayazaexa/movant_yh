/*
2: Skriv ett program som skriver ut ett tal från 50-1 använd en for loop.
*/
#include <stdio.h>

int main()
{
    printf("Printing 50-1:\n");

    for (int i = 50; i > 0; i--)
    {
        printf("%d\n", i);
    }
    printf("\n");
    return 0;
}
