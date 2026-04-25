#include <stdio.h>                                                              // Includes standard input-output functions like printf and scanf
int main()                                                                      // Main function: program execution starts here
{
    
    int i,j,n;                                                                  // Declare variables:
                                                                                // i → row counter
                                                                                // j → column counter
                                                                                // n → size of the pattern
                            
    scanf("%d", &n);                                                            // Read the value of n from the user
    
    for(i=1; i<=n; i++)                                                         // Outer loop controls rows (runs n times)
    {
        for(j=1; j<=n; j++)                                                     // Inner loop controls columns (runs n times)
        {
            if(i==j)                                                            // Checks for left diagonal position
            {
                 printf("%d",j);                                                // Prints number on left diagonal
                
            }
            else if(j==n-i+1)                                                   // Checks for right diagonal position
            {
              printf("%d", j);                                                  // Prints number on right diagonal
            }
            else
            {
                printf(" ");                                                    // Prints space if not on any diagonal
            }
            
        }
        printf("\n");                                                           // Moves cursor to the next line after each row
           
    }
    return 0;                                                                   // Ends the program successfully
}