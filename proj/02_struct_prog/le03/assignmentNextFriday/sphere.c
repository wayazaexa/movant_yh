/*
Skriv ett program som frågar efter en sfärs radie och därefter beräknar voltmen och arean av en sfär. Som indata ges sfärens radie.
Formeln för att beräkna finns på google sfär volym sfär area.


If we're not allowed to use the math.h library, we would have to include a '#DEFINE PI 3.1415926535' and write the calculations as
    '(4 * PI * radius * radius * radius) / 3', and '4 * PI * radius * radius' respectively.
This program causes a compile issue for me in Linux, because the flag -lm has to be included when using math.h (in Linux at least),
    and I don't know VS Code well enough to fix that yet.
Compiling it in the terminal works great though.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double radius;
    double volume;
    double area;
    printf("What's the radius of the sphere you want to do calculations for? ");
    scanf("%lf", &radius);
    // Calculating the volume and area outside of the printf() for readability.
    volume = (4 * M_PI * pow(radius, 3)) / 3;
    area = 4 * M_PI * pow(radius, 2);
    printf("The volume of the sphere is %.2lf volume units, and it's area is %.2lf area units.\n\n", volume, area);
    return 0;
}
