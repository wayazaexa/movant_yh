/*
Dessa funktioner kan inte bara skriva ut fasta texter Det kan ocks� skriva ut resultat man f�r av funktionsanrop.

Skriv et program som anropar funktionen getenv som �r definerad i stdlib.h Getenv kan man f� reda p� vilket v�rde en viss milj�variabel har i det system man k�r.
Man ger milj�variabelns namn som argument till getenv och f�r variabelns v�rde som resultat. tex getenv("USERNAME"); eller computername.
skriv kommandot set i ett kommandof�nster f�r att f� en lista med alla milj�variabler.
*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    printf("Running on ");
    printf(getenv("COMPUTERNAME"));
}
