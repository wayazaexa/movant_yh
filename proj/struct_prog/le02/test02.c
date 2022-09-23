/*
Random crap to make the teacher happy
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main ()
{
    puts("Here's some random crap.");
    //printf("This is your username: %s\n", getenv("COMPUTERNAME"));
    //printf(getenv("COMPUTERNAME"));
    printf("Lowest value for int: %d\n", INT_MIN);
    printf("Largest value for int: %d\n", INT_MAX);
    printf("Number of decimal digits float can contain: %d\n", FLT_DIG);
    printf("Number of decimal digits double can contain: %d\n", DBL_DIG);
    return 0;
}