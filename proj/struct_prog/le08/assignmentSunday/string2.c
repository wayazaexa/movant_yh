/*
En palindrom är en text som blir samma antingen man läser den framifrån eller bakifrån
(t.ex. Madam, Ada och Ni talar bra latin). 
Skriv ett program som läser in en rad med en text och som undersöker om texten är en palindrom. 
Tips: Tag först bort vita tecken från texten och ersätt ev. stora bokstäver med små.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void condenseString(char*, char*);
bool isPalindrome(char*);

int main()
{
    // The variable text contains a hardcoded string, that will be tested whether or not it is a palindrome.
    char text[20] = " Abc Ba  ";
    char result[20];

    condenseString(result, text);
    
    if (isPalindrome(result))
    {
        printf("The text is a palindrome.\n\n");
    }
    else
    {
        printf("The text is not a palindrome.\n\n");
    }
    return 0;
}

// This function takes en untrimmed string and condenses it by removing white spaces and converting it to lowercase.
// The condensed string is put in the variable trimmedStr
void condenseString(char* trimmedStr, char* untrimmedStr)
{
    // This loops over untrimmedStr until we find '\0'.
    while (*untrimmedStr != '\0')
    {
        // This is true if the character untrimmedStr is currently pointing to is not a white space.
        if(!isspace(*untrimmedStr))
        {
            // In that case, the character trimmedStr is pointing to is set to the lowercase character that untrimmedStr is pointing to,
            // and trimmedStr is set to point to the next character in the string.
            *trimmedStr = tolower(*untrimmedStr);
            trimmedStr++;
        }
        // Whether the if-statement is true or not, untrimmedStr is set to point to the next character in the string.
        untrimmedStr++;
    }
    // Once the loop is done, we insert the '\0'-character at the end of trimmedStr
    *trimmedStr = '\0';
}

// This function takes a text and returns true if it's a palindrome and false if it is not a palindrome.
bool isPalindrome(char *text)
{
    int halfway = strlen(text) / 2;
    int j = strlen(text) - 1;
    // i loops from the first character to the middle one, j loops from the last character to the middle one.
    // If at any point text[i] and text[j] deosn't match, the text is not a palindrome and the function returns false.
    for (int i = 0; i < halfway; i++)
    {
        if (text[i] == text[j])
        {
            j--;
        }
        else
        {
            return false;
        }
    }
    // If we were able to go through the whole loop, then the text is a palindrome and we return true.
    return true;
}
