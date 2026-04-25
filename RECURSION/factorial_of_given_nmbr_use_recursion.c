#include <stdio.h>                                                              // Include the standard input/output library for printf and scanf

int main()                                                                      // Main function starts
{
    static int num;                                                             // Declare static variable num to store user input; retains value across recursive calls
    static unsigned long long int fact = 1;                                     // Declare static variable fact to store factorial; initialized to 1 and retains value

    if(fact==1)                                                                 // Check if this is the first call (fact is still 1)
    {
        printf("Enter the num ");                                               // Prompt user to enter a number
        scanf("%d",&num);                                                       // Read user input and store it in num

        if(num<0)                                                               // Check if user entered a negative number
        {
            printf("Invalid Input");                                            // Print error message for negative input
            return 0;                                                           // Exit program immediately for invalid input
        }
    }

    if(num>0)                                                                   // Check if num is greater than 0 to continue factorial calculation
    {
        fact = fact*num;                                                        // Multiply current fact by num
        num--;                                                                  // Decrease num by 1 for next recursion step
        main();                                                                 // Call main recursively to continue calculation
    }

    else if(num==0)                                                             // Check if num has reached 0 (base condition for recursion)
    {
        printf("Factorial of the given number is = %llu",fact);                                             // Print the final factorial value
        return 0;                                                               // Exit program after printing the result
    }

    return 0;                                                                   // End main function (for any other case, though all are handled above)
}
