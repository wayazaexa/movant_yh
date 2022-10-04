/*
Skriv ett program som läser en textfil och som skriver ut textfilens innehåll i kommandofönstret.
Vid utskriften skall alla (TABS) tabulatortecken ersättas med tre mellanslag.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char filename[30];
    char line[200];
    int iterator;

    printf("Enter the name of a C-program: ");
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");

    // This loops over every line in the file fp points to.
    while (fgets(line, 200, fp) != NULL)
    {
        iterator = 0;
        // This loops until the end of the line.
        while (line[iterator] != '\0')
        {
            // If we find a tab, replace it with three spaces, otherwise print the character.
            if (line[iterator] == '\t')
            {
                printf("   ");
            }
            else{
                putc(line[iterator], stdout);
            }
            iterator++;
        }
    }
    
    fclose(fp);
    return 0;
}
