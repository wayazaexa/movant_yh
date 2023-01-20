/*
    Digital root is the recursive sum of all the digits in a number.

    Given n, take the sum of the digits of n.
    If that value has more than one digit, continue reducing in this way until a single-digit number is produced.
    The input will be a non-negative integer.
*/
#include <stdio.h>

int digital_root(int);
int digital_root_r(int);

int main ()
{
    int num = 493193;
    printf("The digital sum of %d is %d.\n\n", num, digital_root(num));

    return 0;
}

int digital_root(int n) {
    int m = digital_root_r(n);
    while (m / 10 != 0)
        m = digital_root_r(m);
    return m;
}

int digital_root_r(int n)
{
    if (n == 0)
        return 0;
    else
        return n % 10 + digital_root_r(n / 10);
}