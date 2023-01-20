/*
Skriv en funktion med namnet ar_sorterat(Man skriver alltid en bool variabel med _)
som undersöker om ett fält med elementen av typen double är sorterat.
Funktionen skall få fältet och antal element som parametrar. Som resultat skall
den ge ett värde av typen _bool. Fältet betraktas som sorterat, om det för varje index
i(utom det första) gäller att element nummer i är större än eller lika med
element nummer i -1. Skriv också en funktion main som läser in data till ett fält
och som sedan anropar funktionen ar_sorterat för att avgöra om fältet är sorterat.
*/
#include <stdio.h>
#include <stdbool.h>
// I use this constant for determining how big the array should be and how many numbers the user should enter.
#define AMOUNT 5

bool ar_sorterat(double array[], int size);

int main()
{
    double array[AMOUNT];
    int size;
    printf("Enter %d numbers: ", AMOUNT);
    
    for (int i = 0; i < AMOUNT; i++)
    {
        scanf("%lf", &array[i]);
    }
    
    // Even though we already have AMOUNT, I wanted to practice writing this calculation.
    size = sizeof(array) / sizeof(array[0]);

    if (ar_sorterat(array, size))
    {
        printf("The array is sorted!\n\n");
    }
    else
    {
        printf("The array is not sorted!\n\n");
    }

    return 0;
}

// This function loops over an array and returns true if the array is sorted, otherwise it returns false.
bool ar_sorterat(double array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        // For each element, I check if the element at the current index is less than the element at the previous index.
        // If that is true, the function returns false.
        if (array[i] < array[i - 1])
        {
            return false;
        }
    }
    // If the function reaches this part, that means the array is sorted, so it returns true.
    return true;
}
