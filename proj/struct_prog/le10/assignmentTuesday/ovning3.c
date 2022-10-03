/*
En textfil innehåller temperaturer som uppmätts kl 13 på en viss plats under en månad. Det finns en temperatur på varje rad i filen.
Skriv ett program som läser filen och som i kommando fönstret visar den högsta uppmätta temperaturen samt medeltemperaturen.
Namnet på filen ska läsas in från tangentbordet.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <float.h>

int main()
{
    char filename[30];
    char line[50];
    int amount = 0;
    double sum = 0;
    double max = DBL_MIN;

    printf("Enter the name of the file to read: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    
    // This loops over the lines in the file.
    while (fgets(line, 50, fp))
    {
        // Update the max if the newly read value is higher than the previously stored value.
        if (atof(line) > max)
        {
            max = atof(line);
        }
        // Add the newly read value to the total sum and increment the amount of values that have been read.
        sum += atof(line);
        amount++;
    }

    printf("The highest measured temperature is %.2lf and the mean value of all temperatures is %.2lf\n\n", max, sum / amount);

    fclose(fp);
    return 0;
}
