/*
    Descriptive comment what the program does
*/
#include <stdio.h>
#include <math.h>

/* Part of assignment 4
void verse1();
void chorus();
void verse2();
void bridge();
void postChorus();
*/

int main ()
{
    /*
    // Assignment 1
    const float PI = 3.141592;
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The circumference is %.2f length units and the area is %.2f area units.\n\n", 2 * PI * radius, PI * radius * radius);
    */

    /*
    // Assignment 2
    double sideA, sideB, hypotenuse;
    printf("Enter the two shortest sides of a right angle triangle: ");
    scanf("%lf%lf", &sideA, &sideB);
    hypotenuse = sqrt(pow(sideA, 2) + pow(sideB, 2));
    printf("The hypotenuse is: %.4lf length units long.\n\n", hypotenuse);
    */

    /*
    //Assignment 3
    char operator;
    double num1, num2, res;

    printf("Enter what operator to use (+ - * /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf%lf", &num1, &num2);

    switch (operator)
    {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            res = num1 / num2;
            break;
        default:
            printf("Invalid input.\n\n");
            return 0;
    }

    printf("%.2lf %c %.2lf = %.2lf\n\n", num1, operator, num2, res);
    */

    /*
    //Assignment 3 - "proper", but ugly. Proper because it doesn't ask for numbers if the user entered a faulty operator.
    char operator;
    double num1, num2, res;

    printf("Enter what operator to use (+ - * /): ");
    scanf("%c", &operator);

    switch (operator)
    {
        case '+':
            printf("Enter two numbers: ");
            scanf("%lf%lf", &num1, &num2);
            res = num1 + num2;
            printf("%.2lf %c %.2lf = %.2lf\n\n", num1, operator, num2, res);
            break;
        case '-':
            printf("Enter two numbers: ");
            scanf("%lf%lf", &num1, &num2);
            res = num1 - num2;
            printf("%.2lf %c %.2lf = %.2lf\n\n", num1, operator, num2, res);
            break;
        case '*':
            printf("Enter two numbers: ");
            scanf("%lf%lf", &num1, &num2);
            res = num1 * num2;
            printf("%.2lf %c %.2lf = %.2lf\n\n", num1, operator, num2, res);
            break;
        case '/':
            printf("Enter two numbers: ");
            scanf("%lf%lf", &num1, &num2);
            res = num1 / num2;
            printf("%.2lf %c %.2lf = %.2lf\n\n", num1, operator, num2, res);
            break;
        default:
            printf("Invalid input.\n\n");
    }
    */

    /*
    // Assignment 4
    verse1();
    chorus();
    verse2();
    chorus();
    bridge();
    chorus();
    postChorus();
    */

    return 0;
}

/* Part of assignment 4
void verse1 ()
{
    printf("I pirouette in the dark\nI see the stars through a mirror\nTired mechanical heart\nBeats 'til the song disappears\n\n");
}

void chorus ()
{
    printf("Somebody shine a light\nI'm frozen by the fear in me\nSomebody make me feel alive\nAnd shatter me\nSo cut me from the line\n");
    printf("Dizzy, spinning endlessly\nSomebody make me feel alive\nAnd shatter me\n\n");
}

void verse2 ()
{
    printf("Shatter me\nSomebody make me feel alive\nAnd shatter me\n\n");
    printf("If only the clockwork could speak\nI wouldn't be so alone\nWe burn every magnet and spring\nAnd spiral into the unknown\n\n");
}

void bridge ()
{
    printf("Shatter me\nSomebody make me feel alive\nAnd shatter me\n\n");
    printf("If I break the glass, then I'll have to fly\nThere's no one to catch me if I take a dive\nI'm scared of changing, the days stay the same\n");
    printf("The world is spinning but only in gray\nIf I break the glass, then I'll have to fly\nThere's no one to catch me if I take a dive\n");
    printf("I'm scared of changing, the days stay the same\nThe world is spinning but only in gray\n(Only, only, only, only, only)\n\n");
}

void postChorus ()
{
    printf("Shatter me\nSomebody make me feel alive\nAnd shatter me\n\n");
}
*/
