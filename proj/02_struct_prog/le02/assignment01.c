/*
 1: På ett matteprov kunde man få högst 50 poäng. Gränsen för betyget E var 25 poäng och för betygen D,C,B och A 30,35,40 respektive 45 poäng.
 Skriv ett program som läser in poängen för en elev och som visar vilket betyg hen fick på provet.
*/

#include <stdio.h>
 
int main()
{
    int points;
    printf("How many points did the student get? ");
    scanf("%d", &points);
    
    if (points < 25)
        printf("Student failed.");
    else if (points < 30)
        printf("Student got the grade E.");
    else if (points < 35)
        printf("Student got the grade D.");
    else if (points < 40)
        printf("Student got the grade C.");
    else if (points < 45)
        printf("Student got the grade B.");
    else
        printf("Student got the grade A.");
    printf("\n\n");
    return 0;
}
 