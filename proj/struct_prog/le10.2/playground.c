/*
    .
*/
#include <stdio.h>

int main ()
{
    int age = 25;
    int *pAge = &age;

    printf("Address of age: %p\n", &age);
    printf("Address of pAge: %p\n", &pAge);
    printf("Address pAge points to: %p\n\n", pAge);

    printf("Value of age: %d\n", age);
    printf("Value at address pAge points to: %d\n\n", *pAge);
    
    return 0;
}
