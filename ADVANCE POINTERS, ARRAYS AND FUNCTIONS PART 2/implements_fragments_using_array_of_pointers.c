
#include <stdio.h>                                                              // Standard input-output functions (printf, scanf)
#include<stdlib.h>                                                              // Memory allocation functions (malloc, free)

// Function to calculate average, store it, and sort rows based on average
void fragments(int row, float *arr[row], int *columns)                          // row = number of rows, arr = array of pointers, columns = column sizes
{
    
    /*for(int i=0; i<row; i++)
    {
        for(int j=0; j<columns[i]; j++)
        {
            printf("%f ",arr[i][j]);
        }
        printf("\n");
    }*/
    
    int i, j;                                                                   // Loop variables
    float sum = 0;                                                              // Variable to store sum of elements in a row
    
    for(i=0; i<row; i++)                                                        // Loop through each row
    {
        sum = 0;                                                                // Reset sum for each row
        
        for(j=0; j<columns[i]; j++)                                             // Loop through elements in current row
        {
            sum = sum + arr[i][j];                                              // Add each element to sum
        }
        
        float avg = sum/columns[i];                                             // Calculate average of current row
        arr[i][columns[i]] = avg;                                               // Store average in extra allocated space
    }
    
    printf("\nBefore sorting output is:\n");                                    // Print heading before sorting
    
    for(int i=0; i<row; i++)                                                    // Loop through rows
    {
        for(int j=0; j<=columns[i]; j++)                                        // Print all elements including average
        {
            printf("%f ",arr[i][j]);                                            // Print each element
        }
        printf("\n");                                                           // Move to next line after each row
    }
    
    for(int i=0; i<row-1; i++)                                                  // Outer loop for bubble sort passes
    {
        for(int j=0; j<row-i-1; j++)                                            // Inner loop for comparing adjacent rows
        {
            if(arr[j][columns[j]] > arr[j+1][columns[j+1]])                     // Compare averages of two rows
            {
                 // Swap rows
                float *temp = arr[j];                                           // Store current row pointer temporarily
                arr[j] = arr[j+1];                                              // Move next row to current position
                arr[j+1] = temp;                                                // Place stored row in next position
                
                // Swap column sizes
                int t = columns[j];                                             // Store column size temporarily
                columns[j] = columns[j+1];                                      // Swap column sizes
                columns[j+1] = t;                                               // Complete swap
            }
        }
    }
    
    printf("\nAfter sorting output is:\n");                                     // Print heading after sorting
    
    for(int i=0; i<row; i++)                                                    // Loop through sorted rows
    {
        for(int j=0; j<=columns[i]; j++)                                        // Print elements including average
        {
            printf("%f ",arr[i][j]);       // Print each value
        }
        printf("\n");                      // Move to next line
    }
    
  
   
}

int main()
{
    int row;                                                                    // Variable to store number of rows
    
    printf("Enter the no,of rows : ");                                          // Prompt user for number of rows
    scanf("%d", &row);                                                          // Read number of rows
    
    float *arr[row];                                                            // Array of pointers (each pointer represents a row)
    
    int columns[row];                                                           // Array to store number of columns for each row
    
    for(int i=0; i<row; i++)                                                    // Loop to read column sizes
    {
        printf("\nEnter no of columns in row[%d] :",i);                         // Prompt for columns in each row
        scanf("%d", &columns[i]);                                               // Read column size
    }
    
    for (int i = 0; i < row; i++)                                               // Loop to allocate memory for each row
    {
        arr[i] = (float*)malloc((columns[i]+1) * sizeof(float));                // Allocate memory (+1 for average)
    }
    
    for(int i=0; i<row; i++)                                                    // Loop to read elements for each row
    {
        printf("\nEnter %d values for row[%d] :",columns[i],i);                 // Prompt for row elements
        
        for(int j=0; j<columns[i]; j++)                                         // Loop to read each element
        {
            scanf("%f", &arr[i][j]);                                            // Read float value into array
        }
    }
    
    fragments(row, arr, columns);                                               // Call function to process and sort rows
    
    for(int i = 0; i < row; i++)                                                // Loop to free allocated memory
    {
        free(arr[i]);                                                           // Free memory of each row
    }
    
    return 0;                                                                   // End of program
}