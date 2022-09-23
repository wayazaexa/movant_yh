/*
1: Skriv ett program som l�ser in 3 heltal och ber�knar samt presenterar medelv�rdet.

2: Skriv ett program som skriver ut hur m�nga byte de grundl�ggande int double och float variablerna inneh�ller. Anv�nd er av Operatorn Sizeof(typ).

3: I limits.h finns INT_MAX och INT_MIN �ven SHRT_MIN resp MAX LONG_MIN resp MAX
I biblioteket float.h FLT_DIG och DBL_DIG vilka anger antalet decimala  siffror som med s�kerhet kan representeras i variabler av typerna float resp double.

Skriv ett program som skriver ut allt ovan i uppgift 3.

*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main ()
{
    // First part
    int value1, value2, value3;
    float mean;
    printf("Enter 3 integers: ");
    scanf("%d%d%d", &value1, &value2, &value3);
    mean = (float)(value1 + value2 + value3) / 3;
    printf("mean: %f\n\n", mean);

    // Second part
    printf("Amount of bytes in int: %ld\n", sizeof(int));
    printf("Amount of bytes in double: %ld\n", sizeof(double));
    printf("Amount of bytes in float: %ld\n\n", sizeof(float));

    // Third part
    printf("Lowest value for int: %d\n", INT_MIN);
    printf("Largest value for int: %d\n", INT_MAX);
    printf("Lowest value for short int: %d\n", SHRT_MIN);
    printf("Largest value for short int: %d\n", SHRT_MAX);
    printf("Lowest value for long int: %ld\n", LONG_MIN);
    printf("Largest value for long int: %ld\n", LONG_MAX);
    printf("Number of decimal digits float can contain: %d\n", FLT_DIG);
    printf("Number of decimal digits double can contain: %d\n\n", DBL_DIG);
    return 0;
}