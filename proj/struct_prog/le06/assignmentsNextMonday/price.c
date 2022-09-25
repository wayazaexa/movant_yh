/*
    This program calculates the price of an item including tax
*/
#include <stdio.h>

double applyTax(double, double);

int main()
{
    double price, tax, fullPrice;
    printf("Enter the price of the item: ");
    scanf("%lf", &price);
    printf("Enter the tax to be applied to the item as a percentage: ");
    scanf("%lf", &tax);
    fullPrice = applyTax(price, tax);
    printf("The full price of the item is: %.2lf\n\n", fullPrice);
    return 0;
}

double applyTax(double price, double tax)
{
    return price + price * tax / 100;
}
