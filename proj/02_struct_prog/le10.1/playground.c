/*
    .
*/
#include <stdio.h>
#include <stdlib.h>

void utmaning5();
void utmaning7();
void utmaning8();
void utmaning9();
void utmaning11();
void utmaning12();

int main ()
{
    //printf("Oh hi Mark!\n\n");
    
    utmaning7();

    return 0;
}

void utmaning5()
{
    int amount;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &amount);
    int array[amount];
    printf("Input %d elements to the array:\n", amount);

    for (int i = 0; i < amount; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Values entered to the array are: ");

    for (int i = 0; i < amount; i++)
        printf("%d ", array[i]);

    printf("\n\n");
}

void utmaning7()
{
    /*
    // My solution, doesn't give us the option to input the size of the rombus
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
            printf(" ");
        for (int k = 0; k < i * 2 + 1; k++)
            printf("*");
        printf("\n");
    }

    for (int i = 3; i >= 0; i--)
    {
        for (int j = 4; j > i; j--)
            printf(" ");
        for (int k = 0; k < i * 2 + 1; k++)
            printf("*");
        printf("\n");
    }
    */

    int r = 6;

    for (int i = 0; i <= r; i++)
    {
        for (int j = 1; j <= r - i; j++)
            printf(" ");
        for (int k = 1; k <= i * 2 - 1; k++)
            printf("*");
        printf("\n");
    }

    for (int i = r - 1; i >= 1; i--)
    {
        for (int j = 1; j <= r - i; j++)
            printf(" ");
        for (int k = 1; k <= i * 2 - 1; k++)
            printf("*");
        printf("\n");
    }

    printf("\n");
}

void utmaning8()
{
    int rows, cols;
    printf("Input the rows and columns of the matrix: ");
    scanf("%d%d", &rows, &cols);
    int matrix[rows][cols];
    int tmatrix[cols][rows];
    printf("Input elements in the first matrix:\n");
    
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    printf("\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf(" %d", matrix[i][j]);
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            tmatrix[j][i] = matrix[i][j];

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
            printf(" %d", tmatrix[i][j]);
        printf("\n");
    }
    printf("\n");
}

struct node {
    int data;
    int key;
    struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;

void addLast(int data, int key)
{
    struct node *new = (struct node*) malloc(sizeof(struct node));
    
    new->data = data;
    new->key = key;
    new->next = NULL;
    
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        last->next = new;
    }
    last = new;
}

void delete(int key)
{
    struct node *curr = head;
    struct node *prev = head;

    while (curr != NULL)
    {
        if (curr->key == key)
        {
            struct node *temp = curr;
            if (curr == head)
            {
                head = head->next;
            }
            else
            {
                prev->next = curr->next;
            }
            printf("Data of node %d which is being deleted is: %d\n", key, temp->data);
            free(temp);
            break;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
}

void printList()
{
    struct node *ptr = head;

    printf("Data entered in the list are:\n");
    while (ptr != NULL)
    {
        printf("Node: %d, Data: %d\n", ptr->key, ptr->data);
        ptr = ptr->next;
    }
}

void utmaning9()
{
    int amount;
    int data;
    int key;
    printf("Input the number of nodes: ");
    scanf("%d", &amount);

    for(int i = 1; i <= amount; i++)
    {
        printf("Input data for node %d: ", i);
        scanf("%d", &data);
        addLast(data, i);
    }

    printList();
    printf("Which node do you want to delete? ");
    scanf("%d", &key);
    delete(key);
    printList();

    printf("Deleting the linked list before exiting.\n");
    while (amount > 0)
    {
        delete(amount);
        amount--;
    }
    printf("\n");
}

void utmaning11()
{
    int array[] = {1, 3, 5, 7, 9};
    int *current = array;

    printf("The elements are:\n");
    for (int i = 0; i < 5; i++)
        printf("Element %d: %d\n", i, *(current + i));
    printf("\n");
}

void printRec(int array[], int curr, int size)
{
    if (curr >= size)
        printf("\n\n");
    else
    {
        printf("%d ", array[curr]);
        printRec(array, curr + 1, size);
    }
}

void utmaning12()
{
    int array[] = {1, 3, 5, 7, 9};
    printf("The elements in the array are: ");
    printRec(array, 0, 5);
}
