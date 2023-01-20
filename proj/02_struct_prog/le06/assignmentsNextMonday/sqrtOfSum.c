/*
    This program calculates the square root of a sum of integers using a function.
*/
#include <stdio.h>
#include <math.h>

double sqrtOfSum(int, int);

int main()
{
    int number1, number2;
    double result;
    printf("Enter two integers: ");
    scanf("%d%d", &number1, &number2);
    result = sqrtOfSum(number1, number2);
    printf("The square root of the sum of %d and %d is %.2lf\n\n", number1, number2, result);

    return 0;
}

double sqrtOfSum(int num1, int num2)
{
    return sqrt(num1 + num2);
}
