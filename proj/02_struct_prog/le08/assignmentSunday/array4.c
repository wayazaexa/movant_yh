/*
Skriv en egen version av memcmp(för att kunna jämföra fält)
Din version behöver bara fungera för fält där elementen är av typen double.
*/
#include <stdio.h>
#include <string.h>
#define SIZE 5

int myMemcmp(double[], double[], int);

int main()
{
    double array1[] = {1.2, 3.4, 5.6, 7.8, 9.0};
    double array2[] = {1.2, 3.2, 5.6, 7.8, 9.0};

    int result = myMemcmp(array1, array2, SIZE);
    printf("With myMemcpy(), which compares one element at a time:\n");

    if (result < 0)
    {
        printf("array1 is less than array2\n\n");
    }
    else if (result > 0)
    {
        printf("array1 is greater than array2\n\n");
    }
    else
    {
        printf("array1 is equal to array2\n\n");
    }

    // This result is sometimes different from mine, but that is because memcmp() compares byte by byte
    // and myMemcmp() compares element by element.
    int result2 = memcmp(array1, array2, SIZE*sizeof(double));
    printf("With myMemcpy(), which compares one byte at a time:\n");

    if (result2 < 0)
    {
        printf("array1 is less than array2\n\n");
    }
    else if (result2 > 0)
    {
        printf("array1 is greater than array2\n\n");
    }
    else
    {
        printf("array1 is equal to array2\n\n");
    }

    return 0;
}

// This function takes two arrays and their size and compares them element by element.
// It assumes that the arrays are of equal size.
int myMemcmp(double array1[], double array2[], int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        if (array1[i] < array2[i])
        {
            return -1;
        }
        if (array1[i] > array2[i])
        {
            return 1;
        }
    }
    return 0;
}
