/*
Skriv ett program som läser en textfil och som skriver ut textfilens innehåll i kommandofönstret.
Vid utskriften skall alla (TABS) tabulatortecken ersättas med tre mellanslag.
*/
#include <stdio.h>

int main()
{
    char filename[30];
    char ch;
    int iterator;

    printf("Enter the name of a text file: ");
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");

    // This loops over every character in the file fp points to.
    while ((ch = fgetc(fp)) != EOF)
    {
            // If we find a tab, replace it with three spaces, otherwise print the character.
            if (ch == '\t')
                printf("   ");
            else
                printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
