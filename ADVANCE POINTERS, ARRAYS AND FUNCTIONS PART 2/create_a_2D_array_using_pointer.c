#include<stdio.h>
#include<stdlib.h>
void display(int **arr, int rows, int columns);
int main()                                      //Both dynamic
{
    int rows, columns;
    printf("Enter the number of rows and cols : ");
    scanf("%d %d",&rows, &columns);
    
    int **arr;
    
    arr = malloc(rows * sizeof(int* ));
    
    for(int i=0; i<rows; i++)
    {
        arr[i] = malloc(columns * sizeof(int));
    }
    
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    display(arr, rows, columns);
    
    for(int i=0; i<rows; i++)
    {
        free(arr[i]);
    }
    free(arr);
    
    return 0;
}
void display(int **arr, int rows, int columns)
{
    printf("Elements of the array are :\n");
    
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}