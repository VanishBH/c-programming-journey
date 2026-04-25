#include<stdio.h>
void square(int arr[], int size)
{
    int square;
   
    for(int i=0; i<size; i++)
    {
        square = *(arr + i) * *(arr + i); 
        *(arr + i) = square;
    }
   
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
    
    printf("\nArray elements before squaring: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",*(arr + i));
    }
    square(arr, size);
    
    
    printf("\nArray elements after squaring; ");
    for(int i=0; i<size; i++)
    {
         printf("%d ",*(arr + i));
    }
    
    return 0;
}