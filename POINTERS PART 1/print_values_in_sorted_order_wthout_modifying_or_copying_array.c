#include <stdio.h>                                                              // Include standard I/O library

void print_sort(int arr[], int size)                                            // Function to print array in sorted order
{
    int smallest, largest, next, flag;                                          // Declare variables for sorting logic

    smallest = arr[0];                                                          // Initialize smallest with first element

    for(int i = 0; i < size; i++)                                               // Loop to find the smallest element
    {
        if(*(arr + i) < smallest)                                               // Compare current element with smallest
            smallest = *(arr + i);                                              // Update smallest if current is smaller
    }

    printf("After sorting: ");                                                  // Print message before sorted output
    printf("%d ", smallest);                                                    // Print the smallest element first

    for(int i = 1; i < size; i++)                                               // Loop for remaining elements
    {
        flag = 0;                                                               // Reset flag for each iteration

        for(int j = 0; j < size; j++)                                           // Find first element greater than smallest
        {
            if(*(arr + j) > smallest)                                           // Check if element is greater than smallest
            {
                next = *(arr + j);                                              // Set as next element
                flag = 1;                                                       // Set flag to indicate valid element found
                break;                                                          // Exit loop after first valid element
            }
        }

        for(int k = 1; k < size; k++)                                           // Find smallest element greater than last
        {
            if(*(arr + k) > smallest && *(arr + k) < next)                      // Check valid and smaller
                next = *(arr + k);                                              // Update next if smaller valid found
        }

        printf("%d ", next);                                                    // Print next smallest element
        smallest = next;                                                        // Update smallest for next iteration
    }
}

int main()                                                                      // Main function
{
    int size, i, largest, smallest;                                             // Declare variables

    printf("Enter the size of the array : ");                                   // Ask for array size
    scanf("%d", &size);                                                         // Read size from user

    int arr[size];                                                              // Declare array of given size

    printf("Enter the elements\n");                                             // Ask user to input elements
    for(i = 0; i < size; i++)                                                   // Loop to read elements
        scanf("%d", &arr[i]);                                                   // Read each element

    print_sort(arr, size);                                                      // Call function to print sorted elements

    printf("\nOriginal array values ");                                         // Message before printing original array
    for(int i = 0; i < size; i++)                                               // Loop to print original array
        printf("%d ", arr[i]);                                                  // Print each original element

    return 0;                                                                   // End program successfully
}
