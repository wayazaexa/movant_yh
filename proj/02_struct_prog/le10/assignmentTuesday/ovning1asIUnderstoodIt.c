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

    while (fgets(line, 200, fp) != NULL)
    {
        if (strstr(line, "//"))
            counter++;
    }

    printf("The amount of line-comments in the file is: %d\n\n", counter);
    fclose(fp);
    return 0;
}
