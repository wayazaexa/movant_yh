/*
    Playing with header-files
*/
#include <stdio.h>
#include "mean_value.h"

int main ()
{
    double value1, value2;
    printf("Enter two numbers: ");
    scanf("%lf%lf", &value1, &value2);
    printf("Mean value of %.2lf and %.2lf is: %.2lf\n\n", value1, value2, meanValue(value1, value2));

    return 0;
}
