#include<stdio.h>
float avg(int arr[], int size)
{
    int sum = 0;
    
    for(int i=0; i<size; i++)
    {
        sum = sum + *(arr+i);
    }
    return (float)sum/size;
    
    
}

int main()
{
    int size;
    scanf("%d",&size);
    
    int arr[size];
    
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    float result = avg(arr, size);
    printf("Average of array elements : %g",result);
    
    return 0;
}