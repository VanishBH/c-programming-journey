#include <stdio.h>                                                              // include standard input output header file for printf and scanf

// function definition → recursive fibonacci function
void positive_fibonacci(int limit, int first_num, int second_num)               // function name and parameters
{
   int next_num = first_num + second_num;                                       // create variable next_num and store sum of first and second numbers

   if (next_num > limit)                                                        // check condition → if next fibonacci number is greater than limit
   {
        return;                                                                 // stop the function and go back (end recursion)
   }

   printf("%d ", next_num);                                                     // print the next fibonacci number followed by space

   positive_fibonacci(limit, second_num, next_num);                             // recursive call → function calls itself with new values
}

// main function → program starting point
int main()
{
    int limit;                                                                  // declare integer variable limit to store user input

    printf("Enter the limit : ");                                               // display message asking user to enter limit
    scanf("%d", &limit);                                                        // read integer value from user and store in limit

    if(limit < 0)                                                               // check if input is negative
    {
        printf("Invalid input");                                                // print invalid input message
        return 0;                                                               // terminate program execution
    }

    printf("0");                                                                // print first fibonacci number 0

    if(limit >= 1)                                                              // check if limit allows second fibonacci number
    {
        printf(" 1 ");                                                          // print second fibonacci number 1 with spaces
    }

    positive_fibonacci(limit, 0, 1);                                            // call recursive function with initial fibonacci values 0 and 1

    return 0;                                                                   // end of program successfully
}
