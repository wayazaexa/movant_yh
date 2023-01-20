/*
Skriv en egen version av memcpy(för att kunna kopiera fält)
Din version behöver bara fungera för fält där elementen är av typen double.
*/
#include <stdio.h>
#define SIZE 5

void myMemcpy(double[], double[], int);

int main()
{
    double array1[] = {1.2, 3.4, 5.6, 7.8, 9.0};
    double array2[] = {0, 0, 0, 0, 0};

    printf("Destination array before copying: ");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%.1lf ", array2[i]);
    }

    printf("\n");

    myMemcpy(array2, array1, SIZE);
    
    printf("Destination array after copying: ");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%.1lf ", array2[i]);
    }

    printf("\n\n");
    
    return 0;
}

// This function copies the src array to the dest array.
// It copies element by element rather than byte by byte the way memcpy() does.
void myMemcpy(double dest[], double src[], int size)
{
    for (int i = 0; i < size; i++)
    {
        dest[i] = src[i];
    }
}
