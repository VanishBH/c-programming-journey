#include<stdio.h>
int main()
{
    /*arr[i] inside bracket i or the values is array index or size from 0 to n not a elements*/
    
    
    int i;
    int size;                        //variable to store the total number of elements in an array;
    printf("Enter the size: ");
    scanf("%d",&size);              // read the array size
    
    int arr[size];                  //declare an array of given size
    
    
    printf("Enter the array elements:");
    for( i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);        //read the input elements from the user and store it to the array
    }
    
    int largest = arr[0];           // assume first element is largest initially
    
    for(i=0; i<size; i++)
    {
        if(arr[i]>largest)        //check if the element is greater or not
        {
            largest = arr[i];    // update the current largest value
        }
    }
    printf("Largest element is: %d ",largest); // print the largest value
    
    return 0;
}