/*
Skriv ett program som frågan användaren efter temperaturen Gör sedan så att den vid <18 går in i en nästlad if sats som säger att vid mindre än 10 grader
 Get your jacket on and turn ON the heat
else Turn on the heat. Obs if satsen ska vara nästlad och som sagt ska den angivna temperaturen vara <18 för att if satsen ska köras.
*/
#include <stdio.h>
 
int main()
{
    float temperature;
    printf("What is today's temperature? ");
    scanf("%f", &temperature);
    if (temperature < 18)
    {
        if (temperature < 10)
            printf("Put your jacket on and turn on the heat.\n\n");
        else
            printf("Turn on the heat.\n\n");
    }
    return 0;
}
 