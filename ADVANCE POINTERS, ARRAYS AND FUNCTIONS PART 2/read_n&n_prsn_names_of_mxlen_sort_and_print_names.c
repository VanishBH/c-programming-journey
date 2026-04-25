#include<stdio.h>                                                               // Includes standard input-output functions like printf, scanf
#include<stdlib.h>                                                              // Includes memory allocation functions like malloc
#include<string.h>                                                              // Includes string functions like strcmp, strcpy

// Function to sort names using bubble sort
void sort_names(char (*ptr)[20], int n)                                         // ptr is pointer to array of strings, n is number of names
{
    // Outer loop for number of passes
    for(int i=0; i<n-1; i++)
    {
        // Inner loop for comparing adjacent elements
        for(int j=0; j<n-i-1; j++)
        {
            // Compare two strings; if first is greater, swap them
            if(strcmp(ptr[j], ptr[j+1]) > 0)
            {
                char temp[20];                                                  // Temporary array to hold string during swapping
                
                strcpy(temp, ptr[j]);                                           // Copy ptr[j] into temp
                strcpy(ptr[j], ptr[j+1]);                                       // Copy ptr[j+1] into ptr[j]
                strcpy(ptr[j+1], temp);                                         // Copy temp (original ptr[j]) into ptr[j+1]
            }
        }
    }
    
    printf("The sorted names are:\n");                                          // Print heading for sorted names
    
    // Loop to print sorted names
    for(int i=0; i<n; i++)
    {
        printf("%s\n", ptr[i]);                                                 // Print each name
    }
}

int main()
{
    //__fpurge(stdout);                                                           // Clears output buffer
    
    int n;                                                                      // Variable to store number of names
    
    printf("Enter the size: ");                                                 // Ask user for number of names
    scanf("%d", &n);                                                            // Read number of names
    
    char (*ptr)[20];                                                            // Pointer to array of strings (each string max 20 chars)
    
    ptr = malloc(n * sizeof(*ptr));                                             // Dynamically allocate memory for n strings
    
    printf("Enter the %d names of length max 20 characters in each\n", n);      // Instruction message
    
    // Loop to read each name
    for(int i=0; i<n; i++)
    {
        printf("[%d]-> ", i);                                                   // Prompt for each name
        scanf("%s", ptr[i]);                                                    // Read string into ptr[i]
    }
    
    sort_names(ptr, n);                                                         // Call function to sort and print names
    
    return 0;                                                                   // End of program
}