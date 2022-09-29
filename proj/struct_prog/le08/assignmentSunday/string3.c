/*
Skriv ett program som läser in en rad från tangentbordet. Programmet skall skriva ut hur lång raden var
och vilket som var det första respektive sista ordet på raden.
Du kan förutsätta att det finns ett eller flera blanka tecken mellan orden på raden.
Tänk på att raden kan ha vita tecken i början och slutet.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void trimString(char*, const char*);

int main()
{
    char *line = NULL;
    char trimmed[200];
    char *res;
    char firstWordStr[30];
    char *lastWordStr;
    const char ch[] = " \t";
    int counter = 0;
    size_t len = 0;
    ssize_t lineLength = 0;

    // Read in a line and remove the '\n' at the end, then print how long the line was.
    printf("Enter a line: ");
    lineLength = getline(&line, &len, stdin);
    line[lineLength - 1] = '\0';
    lineLength--;
    printf("The line you entered is %ld characters long.\n", lineLength);
    
    // Remove white spaces in the beginning and the end of the line.
    trimString(trimmed, line);

    // Find the last word in the string by using strrchr() and remove the ' ' from the beginning of the return value.
    lastWordStr = strrchr(trimmed, ch[0]);
    lastWordStr++;

    // Find the first word in the string by using strpbrk() and strncpy().
    res = strpbrk(trimmed, ch);
    // strpbrk() returns a pointer to the first occurance of a character found in the variable ch,
    // so we loop over it to count how many characters is in the first word so we can use that in strncpy().
    while (res != trimmed)
    {
        res--;
        counter++;
    }
    strncpy(firstWordStr, trimmed, counter);
    // Add the '\0' at the end of the first word.
    firstWordStr[counter] = '\0';

    printf("First word in the line: \"%s\"\n", firstWordStr);
    printf("Last word in the line: \"%s\"\n\n", lastWordStr);
    
    // Call free() on line because getline() allocates memory dynamically.
    free(line);
    return 0;
}

// This function removes white spaces from the beginning and the end of src and puts the result in dest
void trimString(char* dest, const char* src)
{
    int start_it = 0;
    int end_it = strlen(src) - 1;
    
    while (isspace(src[start_it]))
    {
        start_it++;
    }
    while (end_it > 0 && isspace(src[end_it]))
    {
        end_it--;
    }
    strncpy(dest, src + start_it, end_it - start_it + 1);
}
