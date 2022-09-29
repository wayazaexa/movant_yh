/*
Skriv en funktion som heter baklänges som kopierar en text från ett text fält till ett annat
men som gör kopieringen baklänges.
*/
#include <stdio.h>
#include <string.h>

void baklanges(char*, const char*);

int main()
{
    char str1[10] = "";
    char str2[10] = "!jollaH";
    
    baklanges(str1, str2);
    printf("Strings after reverse-copying: \"%s\" & \"%s\"\n\n", str1, str2);
    
    return 0;
}

// This function copies text from one string to another, but backwards.
void baklanges(char *dest, const char *src)
{
    int size = strlen(src);
    int j = size-1;

    // This loops over src from front to back, and writes the character it comes across into dest,
    // putting the characters in reverse order.
    for (int i = 0; i < size; i++)
    {
        dest[j] = src[i];
        j--;
    }
    // Once the loop is done, we insert the '\0'-character at the end of dest.
    dest[size] = '\0';
}
