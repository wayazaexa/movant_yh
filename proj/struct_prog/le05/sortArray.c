/*
    Quick assignment of sorting an array with bubblesort and printing the result
*/
#include <stdio.h>

void bubbleSort(int[], int);
void printArray(int[], int);

int main ()
{
    int array[] = {4, 2, 3, 5, 1};
    int size = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, size);
    printArray(array, size);
    printf("\n\n");

    return 0;
}

void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
