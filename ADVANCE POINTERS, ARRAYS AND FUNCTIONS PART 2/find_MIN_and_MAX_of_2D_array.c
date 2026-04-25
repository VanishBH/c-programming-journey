#include<stdio.h>
int main()
{
    int row;
    int column;
    
    scanf("%d %d", &row, &column);
    
    int arr[row][column];
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int min= arr[0][0];
    
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    
    int max = arr[0][0];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    
    printf("Min is %d\n", min);
    printf("max is %d\n", max);
    
    return 0;
}