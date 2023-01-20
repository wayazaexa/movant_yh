/*
Skriv ett program som läser in ett antal heltal (högst 1000 st)
och skriver ut dom i samma ordning som de lästes in. Inläsningen avslutas med
teckenkombinationen för en of file(ctrl-Z i windows).
Vid utskriften ska ett visst tal bara skrivas igen. Om t.ex följande tal läses in:
45 77 -22 3 45 0 21 -1 3
ska programmet ge utskriften
45 77 -22 3 0 21 -1
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int integerArray[1000];
    int amount = 0;
    bool duplicate = false;
    printf("Enter integers, end with Ctrl + d: ");

    // While the user does not not enter the EOF-command, increase the iterator amount and put the value in integerArray.
    while (scanf("%d", &integerArray[amount]) != EOF)
    {
        amount++;
    }

    printf("These are the numbers without duplicates: ");
    
    // This loops over integerArray as many times as the amount of numbers that the user entered.
    for (int i = 0; i < amount; i++)
    {
        // For each element, duplicate is reset to false.
        duplicate = false;
        
        // To find duplicates, I loop over each previous element in the array.
        for (int j = 0; j < i; j++)
        {
            // If the element at the current index (i) is the same as an element at a previous index (j), duplicate is set to true.
            if (integerArray[i] == integerArray[j])
            {
                duplicate = true;
            }
        }

        // If the program didn't find any duplicate, print the current element.
        if (!duplicate)
        {
            printf("%d ", integerArray[i]);
        }
    }

    printf("\n\n");
    return 0;
}
