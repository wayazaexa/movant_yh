/*
1: Skriv ett program som l�ser in 3 heltal och ber�knar samt presenterar medelv�rdet.

2: Skriv ett program som skriver ut hur m�nga byte de grundl�ggande int double och float variablerna inneh�ller. Anv�nd er av Operatorn Sizeof(typ).

3: I limits.h finns INT_MAX och INT_MIN �ven SHRT_MIN resp MAX LONG_MIN resp MAX
I biblioteket float.h FLT_DIG och DBL_DIG vilka anger antalet decimala  siffror som med s�kerhet kan representeras i variabler av typerna float resp double.

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
    printf("St�rsta int = %d\n", INT_MAX);
    printf("Antal siffror f�r float = %d\n",FLT_DIG);
    printf("Antal siffror f�r Double  ��� = %d\n",DBL_DIG);

    return 0;
}
