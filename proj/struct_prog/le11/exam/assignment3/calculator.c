/*
--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      calculator.c
Description:    This program is a very basic calculator.
Date:           2022-10-10
--------------------------------------------------------------------------------
*/
#include <stdio.h>
#include "calculatorFunctions.h"

int main()
{
    char choice;
    double num1, num2, res;
    printf("Calculator\n");
    printf("==========\n");

    newNumbers(&num1, &num2);

    do
    {
        printMenu(num1, num2);
        scanf(" %c", &choice);

        switch (choice)
        {
            case '+':
                res = add(num1, num2);
                break;
            case '-':
                res = subtract(num1, num2);
                break;
            case '*':
                res = multiply(num1, num2);
                break;
            case '/':
                res = divide(num1, num2);
                break;
            case 'n':
            case 'N':
                newNumbers(&num1, &num2);
                continue;
            case '1':
                newNumber(&num1);
                continue;
            case '2':
                newNumber(&num2);
                continue;
            case 'f':
            case 'F':
                flipNumbers(&num1, &num2);
                continue;
            case 'e':
            case 'E':
                continue;
            default:
                printf("====================\n");
                printf("Invalid input.\n\n");
                printf("====================\n");
                continue;
        }
        printf("====================\n");
        printf("%.2lf %c %.2lf = %.2lf\n\n", num1, choice, num2, res);
        printf("====================\n");
    } while (choice != 'e' && choice != 'E');

    printf("\n");
    return 0;
}