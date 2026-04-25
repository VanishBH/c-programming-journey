#include <stdio.h>                                                              // Header file for input and output functions
int main()                                                                      // Main function where program execution starts
{
    
    int i, j, n;                                                                // i and j are loop counters, n stores user input
    scanf("%d", &n);                                                            // Read the value of n from the user
    
    // This loop prints the upper half of the pattern (including middle line)
    for(i=n; i>=1; i--)                                                         // Controls rows, starts from n and goes down to 1
    {
        // This loop prints numbers from current i value up to n
        for(j=i; j<=n; j++)                                                     // Inner loop: prints numbers from i to n
        {
            printf("%d ",j);                                                    // Print current value of j followed by space
        }
        printf("\n");                                                           // Move cursor to next line after one row
    }
    
    for(i=2;i<=n; i++)                                                          // Outer loop for lower half: runs from 2 to n
    {
        for(j=i; j<=n; j++)                                                     // Inner loop: prints numbers from i to n
        {
            printf("%d ",j);                                                    // Print current value of j followed by space
        }
        printf("\n");                                                           // Move cursor to next line after one row
    }
    
    
    return 0;                                                                   // Return 0 to indicate successful program execution
}