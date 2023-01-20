/*
    This program calculates the volume and area of a sphere using two funtions.
*/
#include <stdio.h>
#include <math.h>

double volumeOfSphere(double);
double areaOfSphere(double);

int main()
{
    double radius;
    double volume;
    double area;
    printf("What's the radius of the sphere you want to do calculations for? ");
    scanf("%lf", &radius);
    // Calculating the volume and area outside of the printf() for readability.
    volume = volumeOfSphere(radius); // (4 * M_PI * pow(radius, 3)) / 3;
    area = areaOfSphere(radius);
    printf("The volume of the sphere is %.2lf volume units, and it's area is %.2lf area units.\n\n", volume, area);
    return 0;
}

double volumeOfSphere(double radius)
{
    return (4 * M_PI * pow(radius, 3)) / 3;
}

double areaOfSphere(double radius)
{
    return 4 * M_PI * pow(radius, 2);
}
