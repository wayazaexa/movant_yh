/*
--------------------------------------------------------------------------------
Author:         Joakim Englund
E-mail:         joakimenglund@protonmail.com
File name:      leapYear.c
Description:    This program examines whether a given year is a leap year.
Date:           2022-10-10
--------------------------------------------------------------------------------
*/

#include <stdio.h>

int leapYear(int);

int main ()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    printf("This year has %d days!\n\n", leapYear(year));

    return 0;
}

/*
Input: An integer representing a year.
Output: An integer representing the amount of days in a year.
Description: This function examines if a year is a leap year and returns the
amount of days the given year contains.
*/
int leapYear(int year)
{
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        return 366;
    }
    else
    {
        return 365;
    }
}