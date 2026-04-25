#include<stdio.h>                                                               // Include standard input/output library
int main()                                                                      // Main function where execution starts
{
    float median1;                                                              // Variable to store median of Array A                      
    float median2;                                                              // Variable to store median of Array B
    int i,j;                                                                    // Loop counters
    
    int size1;                                                                  // Size of Array A

// Ask user to enter size of Array A
    printf("Enter the 'n' value for Array A:");
    scanf("%d",&size1);                                                         // Read the size from user
    int arr1[size1];                                                            // Declare Array A with user-defined size
    
    
    int size2;                                                                  // Variable to store size of Array B
    
// Ask user to enter size of Array B
    printf("Enter the 'n' value for Array B: ");
    scanf("%d",&size2);                                                         // Read the size from user
    int arr2[size2];                                                            // Declare Array B with user-defined size
    
    if(size1>=0 && size2>=0)                                                    // Check if both array sizes are non-negative
    {
// Ask user to enter elements of Array A
        printf("Enter the elements one by one for Array A: ");
        for(int i=0; i<size1; i++)                                              // Loop from 0 to size1-1  (0 to size)
        {
            scanf("%d",&arr1[i]);                                               // Read each element into Array A
        }
        
// Ask user to enter elements of Array B
        printf("Enter the elements one by one for Array B: ");
        for(int i=0; i<size2; i++)                                              // Loop from 0 to size2-1  (0 to size)
        {
            scanf("%d",&arr2[i]);                                               // Read each element into Array B
            
        }
        
        
        
        int temp;                                                               // Temporary variable used for swapping during sorting
        
// Sort Array A using Bubble Sort
        for(int i=0; i<size1-1; i++)                                            // Outer loop controls passes
        {
            for(int j=0; j<size1-i-1; j++)                                      // Inner loop for comparing elements
            {
                if(arr1[j]>arr1[j+1])                                           // If current element is greater than next
                {
                    
                // Swap arr2[j] and arr2[j+1]
                    temp=arr1[j];                                               // Store the value of arr1[j] in a temporary variable
                    arr1[j]=arr1[j+1];                                          // Move the next element arr1[j+1] into the current position arr1[j]
                    arr1[j+1]=temp;                                             // Put the original value of arr1[j] (stored in temp) into arr1[j+1]
                    
                }
            }
        }
        
        
    /*
    printf("array1 elements: are: ");
    for(int i=0; i<size1; i++)
    {
        printf("%d ",arr1[i]);
    }
    */
        
        
            if(size1%2 != 0)
            {
                median1 = arr1[size1/2];
                printf("median of array1: %g ",median1);
            }
            else
            {
                median1 = (arr1[(size1/2)-1] + arr1[size1/2])/2.0;
                printf("median of array1: %g ",median1);
            }
        
        
    // Sort Array A using Bubble Sort
         for(int i=0; i<size2-1; i++)                                           // Outer loop controls passes
        {
            for(int j=0; j<size2-i-1; j++)                                      // Inner loop for comparing elements
            {
                if(arr2[j]>arr2[j+1])                                           // If current element is greater than next
                {
                    temp=arr2[j];                                               // Store the value of arr2[j] in a temporary variable
                    arr2[j]=arr2[j+1];                                          // Move the next element arr1[j+1] into the current position arr1[j]
                    arr2[j+1]=temp;                                             // Put the original value of arr1[j] (stored in temp) into arr1[j+1]
                    
                }
            }
        }
        
        
    /*
    printf("\narray2 elements are: ");
    for(int i=0; i<size2; i++)
    {
        printf("%d ",arr2[i]);
    }
    */
    
        
        
// Calculate median of Array B
         if(size2%2 != 0)                                                       // If number of elements is odd
            {
                median2 = arr2[size2/2];                                        // Median is middle element
                printf("median of array2: %g ",median2);                         // Print median
            }
            
            else                                                                // If number of elements is even
            {
                median2 = ((arr2[(size2/2)-1] + arr2[size2/2])/2.0);            // Median is average of two middle elements
                printf("\nmedian of array2: %g ",median2);                       // Print median
            }
        
        
// Calculate median of both arrays
        float median_for_both_arrays = (median1 + median2)/2.0;                 // Average of two medians
        printf("\nMedian of both arrays: %g ",median_for_both_arrays);          // Print result
        
        
        
    }
    return 0;
}