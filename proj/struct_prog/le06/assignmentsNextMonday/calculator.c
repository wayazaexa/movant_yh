/*
    This program is a very basic calculator
*/
#include <stdio.h>
#include "calculationMethod.h"

int main()
{
    char operator, c;
    double num1, num2, res;

    printf("Enter two numbers: ");
    scanf("%lf%lf", &num1, &num2);
    
    // I was having trouble with the program skipping the second scanf() and found this on c-faq.com
    //     as a way to flush the input buffer in case of any unwanted leftovers and now it works.
    while((c = getchar()) != '\n' && c != EOF){}
    
    printf("Enter what operator to apply to the numbers (+ - * /): ");
    scanf("%c", &operator);

    switch (operator)
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
        default:
            printf("Invalid input.\n\n");
            return 0;
    }

    printf("%.2lf %c %.2lf = %.2lf\n\n", num1, operator, num2, res);
    return 0;
}
