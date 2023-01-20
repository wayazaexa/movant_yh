/*
Skriv ett program som läser in ett godtyckligt antal helttal(Ni får bestämma själva hur många, men be användaren skriva 0 för att avsluta)
När den är klar med inläsningen ska det största samt det minsta talet Presenteras av de inlästa talen.
*/
#include <stdio.h>

int main()
{
    int newNumber;
    int min;
    int max;
    printf("Enter any amount of integers. End with a 0 (zero).\n");
    scanf("%d", &newNumber);
    // Set min and max to the value of the newly scanned variable newNumber.
    min = max = newNumber;

    // I just really wanted to catch this exception, because 0 is our escape character so I don't like that it shows up in the result if the user only inputs a 0.
    if (newNumber == 0)
    {
        printf("You didn't enter any numbers other than 0. =(\n\n");
    }
    else
    {
        // Loop ends when newNumber == 0.
        while (newNumber != 0)
        {
            // Update min if newNumber is less than the current min.
            if (newNumber < min)
            {
                min = newNumber;
            }
            // Update max if newNumber is greater than the current max.
            else if (newNumber > max)
            {
                max = newNumber;
            }
            // Scan a newNumber for next iteration of the loop.
            scanf("%d", &newNumber);
        }
        
        printf("The smallest number you entered is %d and the largest number you entered is %d.\n\n", min, max);
    }

    return 0;
}
