/*
    Gör ett program som frågar användare efter 2 tal och adderar dessa tal med varandra och presenterar svaret.
    Fråga sedan efter en ny beräkning tex "Ny beräkning? 1 för ja 2 för nej" Använd en do loop.
    do
    {

    } while (argument);
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    int number1;
    int number2;

    do
    {
        printf("Enter two integers: ");
        scanf("%d%d", &number1, &number2);
        printf("%d + %d = %d.\n\n", number1, number2, number1 + number2);
        printf("Do you want to perform another calculation? (1 for yes, 2 for no) ");
        scanf("%d", &choice);
    } while (choice == 1);
    

    return 0;
}
