#include<stdio.h>
int main()
{
    int rows, columns;
    printf("Enter the number of rows and cols : ");
    scanf("%d %d", &rows, &columns);
    
    int arr[rows][columns];
    
    printf("Enter the elements : ");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Elements of the array are :\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}