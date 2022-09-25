/*
Skriv ett program som läser in ett godtyckligt antal helttal(Ni får bestämma själva hur många, men be användaren skriva 0 för att avsluta)
När den är klar med inläsningen ska det största samt det minsta talet Presenteras av de inlästa talen.

Den här lösningsmetoden förutsätter att användaren är snäll och matar in minst ett tal och en nolla.
Jag har även skrivit en lösning som gör ett specialfall av första inmatningen för att handskas med bråkstakar som matar in en nolla direkt.

*/
#include <stdio.h>
#include <limits.h>

int main()
{
    int newNumber;
    int min = INT_MAX;
    int max = INT_MIN;
    printf("Enter any amount of integers. End with a 0 (zero). ");

    do
    {
        scanf("%d", &newNumber);
        if (newNumber != 0)
        {
            if (newNumber < min)
            {
                min = newNumber;
            }
            // The reason this isn't as else-if is so that it is correct if the user only inputs one number
            if (newNumber > max)
            {
                max = newNumber;
            }
        }
    } while (newNumber != 0);
        
    printf("The smallest number you input is %d and the largest number you input is %d.\n\n", min, max);

    return 0;
}
