/*
--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      calculatorFunctions.c
Description:    This file contains the helper functions for the calculator
                in calculator.c.
Date:           2022-10-10
--------------------------------------------------------------------------------
*/
#include <stdio.h>
#include "calculatorFunctions.h"

/*
Inputs: Two variables of type double.
Outputs: A result of type double.
Description: This functions adds its inputs and returns the value.
*/
double add(double num1, double num2)
{
    return num1 + num2;
}

/*
Inputs: Two variables of type double.
Outputs: A result of type double.
Description: This functions subtracts the second of its inputs from the first
of its inputs and returns the value.
*/
double subtract(double num1, double num2)
{
    return num1 - num2;
}

/*
Inputs: Two variables of type double.
Outputs: A result of type double.
Description: This functions multiplies its inputs and returns the value.
*/
double multiply(double num1, double num2)
{
    return num1 * num2;
}

/*
Inputs: Two variables of type double.
Outputs: A result of type double.
Description: This functions divides its first input by the second input and
returns the value.
*/
double divide(double num1, double num2)
{
    return num1 / num2;
}

/*
Inputs: Two pointers to variables of type double.
Output: N/A.
Description: This function handles input of new numbers.
*/
void newNumbers(double *num1, double *num2)
{
    printf("Enter the first number: ");
    scanf("%lf", num1);
    printf("Enter the second number: ");
    scanf("%lf", num2);
}

/*
Input: A pointer to a variable of type double.
Output: N/A.
Description: This function handles input of a new number.
*/
void newNumber(double *number)
{
    printf("Enter the new number: ");
    scanf("%lf", number);
}

/*
Inputs: Two pointers to variables of type double.
Output: N/A.
Description: This function flips the order of the numbers.
*/
void flipNumbers(double *num1, double *num2)
{
    double temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

/*
Inputs: Two numbers of type double.
Output: N/A:
Description: This function prints the menu for the calculator. Used to clean up
the main function.
*/
void printMenu(double num1, double num2)
{
    printf("====================\n");
    printf("What do you want to do with these numbers?\n");
    printf("  %.2lf + %.2lf? (+)\n", num1, num2);
    printf("  %.2lf - %.2lf? (-)\n", num1, num2);
    printf("  %.2lf * %.2lf? (*)\n", num1, num2);
    printf("  %.2lf / %.2lf? (/)\n", num1, num2);
    printf("Enter new numbers? (n)\n");
    printf("Change the first number? (1)\n");
    printf("Change the second number? (2)\n");
    printf("Flip the order of the numbers? (f)\n");
    printf("Exit? (e)\n\n");
    printf("Choice: ");
}