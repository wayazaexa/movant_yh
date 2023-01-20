/*
--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      celsius.c
Description:    This program converts temperatures from Celsius to Fahrenheit.
Date:           2022-10-10
--------------------------------------------------------------------------------
*/

#include <stdio.h>

double convertCelsius(double);

int main ()
{
    double temperature, result;
    char repeat;
    printf("Temperature converter\n");
    printf("=====================\n");

    do
    {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temperature);

        result = convertCelsius(temperature);
        printf("%.2lf degrees Fahrenheit. ", result);

        // If the temperature is below 5 or above 35 degrees celsius.
        if (result < 41 || result > 95)
        {
            printf("Days like this makes you want to stay inside!\n");
        }
        else
        {
            printf("Days like this is what we look forward to!\n");
        }
        printf("Do you want to convert again? (y/n) ");
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');

    printf("\n\n");
    return 0;
}

/*
Input: A double representing temperature in Celsius.
Output: A double representing temperature in Fahrenheit.
Description: This function converts a temperature in Celsius to a temperature
in Fahrenheit and returns the result. 
*/
double convertCelsius(double celsius)
{
    return celsius * 1.8 + 32;
}