/*
Skriv ett program som läser in en textfil som innehåller ett C-program. Programmet skall fråga efter filens namn.
Programmet skall undersöka vilka rader i filen som innehåller kommentarer dvs //.
Programmet skall skriva ut hur många // tecken som hittats och presentera det värdet.
Tips: Standardfunktionen strstr kan vara användbar.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char filename[30];
    char line[200];

    printf("Enter the name of a C-program (I suggest ovning2.c): ");
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");
    int counter = 0;
    int iterator;

    // This loops over every line in the file fp points to.
    while (fgets(line, 200, fp) != NULL)
    {
        iterator = 0;
        // This loops until the end of the line
        while (line[iterator] != '\0')
        {
            // Here we increment counter if we find a '/'
            if (line[iterator] == '/')
            {
                counter++;
            }
            iterator++;
        }
    }
    
    printf("The amount of '/' in the file is: %d\n\n", counter);
    fclose(fp);
    return 0;
}
