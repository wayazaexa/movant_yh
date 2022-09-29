/*
Skriv en funktion som roterar elementen i ett heltalsfält ett steg åt höger.
Detta betyder att element nr 0 skall flyttas till plats nr 1,
element nr 1 till plats nr 2 osv.
De sista elementen skall flyttas till plats nr 0.
*/
#include <stdio.h>
#define SIZE 5

void rotateArray(int[], int);

int main()
{
    // This is the array we rotate
    int array[SIZE] = {1, 2, 3, 4, 5};

    printf("Array before rotating: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Obviously we already have SIZE, but I wanted to practice writing sizeof(array) / sizeof(array[0]).
    rotateArray(array, sizeof(array) / sizeof(array[0]));

    printf("Array after rotating once: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");

    return 0;
}

// This function takes an array and its size, and rotates the elements one step to the right,
// putting the last element first.
void rotateArray(int array[], int size)
{
    int temp = array[size - 1];
    // This loops over the array from the back to the front because that's the natural way of doing it
    // when we want to rotate elements to the right.
    for (int i = size - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = temp;
}
