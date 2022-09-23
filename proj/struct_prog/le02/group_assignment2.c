/*
Ber�kna Arean med hj�lp av 2 variabler sida1 och sida2 i float skriv ut resultatet p� samma rad.
Variabel v�rdet f�r du fr�n anv�ndaren dvs du skall anv�nda dig av printf och scanf. �ven med %.2f n�r vi presenterar svaret.
*/

#include <stdio.h>

int main ()
{
    float side1, side2;
    printf("Input the two sides: ");
    scanf("%f%f", &side1, &side2);
    printf("Side1 = %.2f, side2 = %.2f, area = side1 * side2 = %.2f\n\n", side1, side2, side1 * side2);
    return 0;
}