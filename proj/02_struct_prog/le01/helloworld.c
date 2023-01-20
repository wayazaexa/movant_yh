/*
Insert random comments to make the teacher happy. Describe what the program does, inputs/outputs, dependencies and so on.

Will get deductions on exams if not included.
*/

#include <stdlib.h>
#include <stdio.h>

void main ()
{
    const float PI = 3.141592;
    char name[20];
    int age;
    
    printf("Hello world! Made you look! ;p\n");
    printf("What's your name and age? ");
    scanf("%s", name);
    scanf("%d", &age);
    printf("Hello %s, you %d year old beautiful bastard!\nRandom fact: Pi = %f\n", name, age, PI);

    if (age < 18)
        printf("Aren't you a bit young to be here?\n\n");
    else
        printf("Let's go for a beer sometime!\n\n");
}