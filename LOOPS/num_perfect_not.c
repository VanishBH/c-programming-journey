#include <stdio.h>                                                              // Includes standard input-output functions like scanf and printf
int main()                                                                      // Main function where program execution starts
{
    int i;                                                                      // Variable used as a loop counter
    int n;                                                                      // Variable to store the number entered by the user
    int sum=0;                                                                  // Variable to store the sum of factors, initialized to 0
    
    scanf("%d",&n);                                                             // Reads an integer value from the user and stores it in n
    
    if(n<0)                                                                     // Checks if the entered number is negative
    {
        printf("Error: Invalid Input, Enter only positive number");             // Prints error message if number is negative
        return 0;
    }
    
    for(i=1; i<n; i++)                                                          // Loop runs from 1 to one less than n
        {
            
    if(n%i==0)                                                                  // Checks if i is a factor of n (no remainder)
    {
    sum = sum+i;                                                                // Adds the factor i to sum
    }
        
    } 
    if(sum == n)                                                                // Checks if sum of factors is equal to the number
    
    printf("Yes, entered number is  perfect number");                           // Printed if number is a perfect number
    else
    
    
    printf("No, entered number is not a perfect number");                       // Printed if number is not a perfect number
        
     
    return 0;                                                                   // Ends the program and returns control to the operating system
}