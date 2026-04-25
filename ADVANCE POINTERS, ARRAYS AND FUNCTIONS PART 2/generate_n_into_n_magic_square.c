
#include <stdio.h>                                                              // For printf and scanf functions
#include <stdlib.h>                                                             // For dynamic memory allocation (calloc, free)

// Function to generate and print magic square
void magic_square(int **arr, int n)
{
    int row = 0;                                                                // Start from first row
    int column = n / 2;                                                         // Start from middle column

    int prev_row;                                                               // To store previous row position
    int prev_column;                                                            // To store previous column position

    // Loop to fill numbers from 1 to n*n
    for(int i = 1; i <= n * n; i++)
    {
        arr[row][column] = i;                                                   // Place current number in matrix

        prev_row = row;                                                         // Save current row
        prev_column = column;                                                   // Save current column

        row = row - 1;                                                          // Move one step UP
        column = column + 1;                                                    // Move one step RIGHT

        // If row goes out of top boundary, wrap to last row
        if(row < 0)
        {
            row = n - 1;
        }

        // If column goes out of right boundary, wrap to first column
        if(column == n)
        {
            column = 0;
        }

        // If the next position is already filled
        if(arr[row][column] != 0)
        {
            row = prev_row + 1;                                                 // Move DOWN from previous position
            column = prev_column;                                               // Keep same column
        }
    }

    // Printing the magic square
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);                                           // Print each element
        }
        printf("\n");                                                           // Move to next line after each row
    }
}

int main()
{
    int n;                                                                      // Variable to store size of magic square

    //printf("Enter a number: ");                                                 // Prompt user
    scanf("%d", &n);                                                            // Read input from user

    // Check if number is invalid (non-positive or even)
    if(n <= 0 || n % 2 == 0)
    {
        printf("Error : Please enter only positive odd numbers\n");                  // Error message
        return 0;   // Exit program
    }

    int **arr;                                                                  // Double pointer for dynamic 2D array

    // Allocate memory for rows (array of pointers)
    arr = calloc(n, sizeof(int*));

    // Allocate memory for each row (columns)
    for(int i = 0; i < n; i++)
    {
        arr[i] = calloc(n, sizeof(int));                                        // Initialize with 0
    }

    // Call function to generate and print magic square
    magic_square(arr, n);

    // Free each row memory
    for(int i = 0; i < n; i++)
    {
        free(arr[i]);
    }

    free(arr);                                                                  // Free main pointer

    return 0;                                                                   // End of program
}