/*
Dessa funktioner kan inte bara skriva ut fasta texter Det kan också skriva ut resultat man får av funktionsanrop.

Skriv et program som anropar funktionen getenv som är definerad i stdlib.h Getenv kan man få reda på vilket värde en viss miljövariabel har i det system man kör.
Man ger miljövariabelns namn som argument till getenv och får variabelns värde som resultat. tex getenv("USERNAME"); eller computername.
skriv kommandot set i ett kommandofönster för att få en lista med alla miljövariabler.
*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    printf("Running on ");
    printf(getenv("COMPUTERNAME"));
}
