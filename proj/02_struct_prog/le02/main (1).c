/*
1: Skriv ett program som läser in 3 heltal och beräknar samt presenterar medelvärdet.

2: Skriv ett program som skriver ut hur många byte de grundläggande int double och float variablerna innehåller. Använd er av Operatorn Sizeof(typ).

3: I limits.h finns INT_MAX och INT_MIN även SHRT_MIN resp MAX LONG_MIN resp MAX
I biblioteket float.h FLT_DIG och DBL_DIG vilka anger antalet decimala  siffror som med säkerhet kan representeras i variabler av typerna float resp double.

Skriv ett program som skriver ut allt ovan i uppgift 3.

*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    system("chcp 1252");
    printf("Minsta int = %d\n", INT_MIN);
    printf("Största int = %d\n", INT_MAX);
    printf("Antal siffror för float = %d\n",FLT_DIG);
    printf("Antal siffror för Double  äöå = %d\n",DBL_DIG);

    return 0;
}
