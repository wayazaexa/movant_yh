/*
I denna �vning ska vi l�ra oss att v�lja, dvs "om" eller "if" p� engelska!
Skriv ett program som fr�gar anv�ndaren  hur m�nga grader det �r ute!

Du ska presentera F�ljande: Om det �r mindre �n 0 grader ute s� ska programmet s�ga:
idag �r det x grader ute! Ta p� dig en jacka n�r du g�r ut" �r det mer �n 0 grader ute Ska det st�:
Det �r x antal grader ute det kan vara kallt men du beh�ver inte ta med en jacka. N�t i den stilen, ni beh�ver inte kopiera mig
Men n�got liknande.
*/

#include <stdio.h>

int main ()
{
    float temperature;
    printf("What's the outside temperature? ");
    scanf("%f", &temperature);
    printf("Today it's %.2f degrees outside! ", temperature);

    if (temperature < 0)
        printf("Put on a winter jacket if you're going out!");
    else if (temperature < 15)
        printf("You might want to put on a thin jacket if you're going out!");
    else
        printf("You don't need a jacket today!");
    
    printf("\n\n");
    return 0;
}