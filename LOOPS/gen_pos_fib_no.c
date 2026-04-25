#include <stdio.h>                                                              // Includes input and output functions like scanf and printf
int main()                                                                      // Main function where program execution starts
{ 
    
    int limit_number;                                                           // Stores the limit up to which Fibonacci numbers are printed
    int first_number=0;                                                         // Stores the first Fibonacci number
    int second_number=1;                                                        // Stores the second Fibonacci number
    int next_number=0;                                                          // Stores the next Fibonacci number to print
    
    scanf("%d", &limit_number);                                                 // Reads the limit number from the user

    
    if(limit_number>=0)                                                         // Checks whether the input is a valid (non-negative) number
    {
        while(next_number <= limit_number)                                      // Loop runs until next_number exceeds the limit
        {
            printf("%d ",next_number);                                          // Prints the current Fibonacci number
            
            first_number = second_number;                                       // Moves second number to first number
            second_number = next_number;                                        // Moves current number to second number
            next_number = (first_number + second_number);                       // Calculates the next Fibonacci number 
        }
    }
    else
    {
        printf("Invalid input");                                                // Prints error message if input is negative
    }
    return 0;                                                                   // Ends the program successfully
}