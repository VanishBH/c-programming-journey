#include <stdio.h>                                                              // include standard input output header file for printf and scanf

// function definition → recursive negative fibonacci function
void negative_fibonacci(int limit, int first_num, int second_num)               // function with three parameters
{
    int next_num = first_num - second_num;                                      // create variable next_num and store subtraction of first and second numbers
    
    if(next_num > -limit || next_num < limit)                                   // check stopping condition based on limit range
    {
        return;                                                                 // stop recursion and return back to previous function call
    }
       
    printf("%d ", next_num);                                                    // print next fibonacci number followed by space
    
    negative_fibonacci(limit, second_num, next_num);                            // recursive call with updated values
}

// main function → program starting point
int main()
{
    int limit;                                                                  // declare integer variable to store user input
    
    scanf("%d", &limit);                                                        // read integer input from user and store in limit
    
    if(limit > 0)                                                               // check if input is positive
    {
        printf("Invalid input");                                                // print invalid input message
        return 0;                                                               // terminate program execution
    }
    
    printf("0");                                                                // print first fibonacci number 0

    if(limit < 0)                                                              // check condition to print second fibonacci number
    {
        printf(" 1 ");                                                          // print second fibonacci number 1 with spaces
    }
    
    negative_fibonacci(limit, 0, 1);                                            // call recursive function with initial values 0 and 1
 
    return 0;                                                                   // end program successfully
}
