#include <stdio.h>                                                              // Header file for input and output functions

int third_largest(int arr[], int size)                                          // Function to find third largest element
{
    int first_largest;                                                          // Variable to store the largest value
    int second_largest;                                                         // Variable to store the second largest value
    int third_large;                                                            // Variable to store the third largest value
    

    // Check if first element is the largest among first three
    if(arr[0] >= arr[1] && arr[0] >= arr[2])
    {
        first_largest = arr[0];                                                 // Assign arr[0] as largest

        if(arr[1] >= arr[2])                                                    // Compare remaining two
        {
            second_largest = arr[1];                                            // Assign second largest
            third_large = arr[2];                                               // Assign third largest
        }
        else
        {
            second_largest = arr[2];                                            // Assign second largest
            third_large = arr[1];                                               // Assign third largest
        }
    }
    
    // Check if second element is the largest
    else if(arr[1] >= arr[0] && arr[1] >= arr[2])
    {
        first_largest = arr[1];                                                 // Assign arr[1] as largest

        if(arr[0] >= arr[2])                                                    // Compare remaining two
        {
            second_largest = arr[0];                                            // Assign second largest
            third_large = arr[2];                                               // Assign third largest
        }
        else
        {
            second_largest = arr[2];                                            // Assign second largest
            third_large = arr[0];                                               // Assign third largest
        }
    }
    // Otherwise third element is the largest
    else
    {
        first_largest = arr[2];                                                 // Assign arr[2] as largest

        if(arr[0] >= arr[1])                                                    // Compare remaining two
        {
            second_largest = arr[0];                                            // Assign second largest
            third_large = arr[1];                                               // Assign third largest
        }
        else
        {
            second_largest = arr[1];                                            // Assign second largest
            third_large = arr[0];                                               // Assign third largest
        }
    }

    // Loop starts from index 3 because first three elements are already processed
    for(int i = 3; i < size; i++)
    {
        if(arr[i] > first_largest)                                              // If current element is greater than largest
        {
            third_large = second_largest;                                       // Shift second to third
            second_largest = first_largest;                                     // Shift first to second
            first_largest = arr[i];                                             // Update largest
        }
        
        
        else if(arr[i] > second_largest)                                        // If element is between first and second
        {
            third_large = second_largest;                                       // Shift second to third
            second_largest = arr[i];                                            // Update second largest
        }
        else if(arr[i] > third_large)                                           // If element is between second and third
        {
            third_large = arr[i];                                               // Update third largest
        }
    }

    return third_large;                                                         // Return third largest element
}

int main()
{
    int size, ret;                                                              // Variables for array size and result

    printf("Enter the size of the array :");                                    // Ask user for array size
    scanf("%d", &size);                                                         // Read size from user

    int arr[size];                                                              // Declare array of given size

    for(int i = 0; i < size; i++)                                               // Loop to read array elements
    {
        scanf("%d", &arr[i]);                                                   // Read each element
    }

    ret = third_largest(arr, size);                                             // Call function

    printf("Third largest element of the array is %d\n", ret);                  // Print result
    
    return 0;                                                                   // End of program
}
