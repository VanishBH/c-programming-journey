#include <stdio.h>                                                              // Includes standard input-output functions like printf and scanf

int sec_largest(int arr[], int size)                                            // Function to find the second largest element in the array
{
    int first_largest, second_largest;                                          // Variables to store the largest and second largest values
    

    // Compare first two elements to initialize correctly
    if(arr[0] > arr[1])                                                         // If first element is greater than second
    {
        first_largest = arr[0];                                                 // Store arr[0] as the largest value
        second_largest = arr[1];                                                // Store arr[1] as the second largest value
        
    }
    else                                                                        // If second element is greater than first
    {
        first_largest = arr[1];                                                 // Store arr[1] as the largest value
        second_largest = arr[0];                                                // Store arr[0] as the second largest value
        
    }

    // Loop starts from index 2 because first two elements are already checked
    for(int i = 2; i < size; i++)
    {
        if(arr[i] > first_largest)                                              // If current element is greater than the largest
        {
            second_largest = first_largest;                                     // Old largest becomes second largest
            first_largest = arr[i];                                             // Current element becomes the largest
        }
        else if(arr[i] > second_largest)                                        // If current element is between first and second largest
        {
            second_largest = arr[i];                                            // Update second largest value
        }
    }

    return second_largest;                                                      // Return the second largest element
}

int main()
{
    int size, ret;                                                              // Variables to store array size and return value

    printf("Enter the size of the array : ");                                   // Ask user to enter array size
    scanf("%d", &size);                                                         // Read array size from user

    int arr[size];                                                              // Declare array of given size

    for(int i = 0; i < size; i++)                                               // Loop to read array elements
    {
        scanf("%d", &arr[i]);                                                   // Read each element into the array
    }

    ret = sec_largest(arr, size);                                               // Call function to find second largest element

    printf("Second largest element of the array is %d\n", ret);                 // Print the result
    
    return 0;
}
