/*
Skriv ett program som läser in ett antal namn från tangentbordet och sparar de inlästa namnen i en textfil med namnet personer.txt.
I textfilen skall det stå ett namn på varje rad. Om det redan finns en fil med det namnet skall filen inte förstöras,
utan de nya namnen skall läggas till sist i filen. Kör programmet två gånger och lägg varje gång till några personer. 
Innan du kör programmet första gången skall du se till att det inte finns någon fil med namnet personer.txt.
Efter varje körning kan du använda en texteditor för att se vad som finns i filen personer.txt.
*/
#include <stdio.h>

// I'm going to comment every line of this program so I can use this as input for ovning1.c.
int main()
{
    // Declare a string-variable called name.
    char name[100];
    // Initialize a file-pointer called fp to the file personer.txt, set to append-mode.
    FILE *fp = fopen("personer.txt", "a");

    // Prompt the user for names.
    puts("Enter names, press <Enter> inbetween names. End by pressing <Ctrl + d>");
    
    // While the user enters names...
    while (fgets(name, 100, stdin) != NULL)
    {
        // ...append them to the file.
        fputs(name, fp);
    }

    // Close the file to prevent memory leaks.
    fclose(fp);
    // Exit cleanly like a good boy.    This file contains 8 line-comments.
    return 0;
}
