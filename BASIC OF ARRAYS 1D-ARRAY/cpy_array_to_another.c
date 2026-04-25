#include<stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");           //reading the array size from the user;
    scanf("%d",&size);
    
    int arr[size];                          //array 1 is to store user input
    int arr2[size];                         //array 2 is initially empty
    
    printf("Enter array elements: ");           // reading elements from the user to store in arr
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
         
    }
    for(int i=0; i<size; i++)
    {
    arr2[i]=arr[i];                             //copy elements from arr to arr2
    }
    
    printf("Array1 elements:");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);                   //print arr1
       
    }
    printf("\nArray2 elements:");
    for(int i=0; i<size; i++)
    {
         printf("%d ",arr2[i]);                 //print arr2
    }
       
    return 0;
}