#include <stdio.h>                                                              // include standard input/output library for printf and scanf

int is_prime(int *num)                                                          // function named is_prime, takes address of an integer
{
    if(*num < 2)                                                                // check if the value stored at that address is less than 2
    {
        return 0;                                                               // if yes, return 0 meaning "not prime"
    }

    for(int i = 2; i <= *num/2; i++)                                            // start loop from 2 up to half of the number
    {
        if(*num % i == 0)                                                       // check if number is exactly divisible by i
        {
            return 0;                                                           // if divisible, return 0 meaning "not prime"
        }
    }
    return 1;                                                                   // if no divisor found, return 1 meaning "prime"
}


int main()                                                                      // main function where program starts
{
    int num;                                                                    // declare an integer variable named num

    scanf("%d", &num);                                                          // read an integer from user and store in num using its address
    
    if(num <= 0)                                                                // check if the entered number is less than or equal to zero
    {
        printf("Invalid input");                                                    // print message saying the input is not valid
        return 0;                                                                   // stop the program and exit from main function
    }


    int result = is_prime(&num);                                                // call is_prime and pass address of num, store return value in result
    

    if(result == 1)                                                             // check if function returned 1
    {                                                                          
        printf("%d is a prime number\n", num);                                  // if yes, print that number is prime
    }
        
    else                                                                        // otherwise (result is 0)
    {
        printf("%d is not a prime number\n", num);                              // print that number is not prime
    }

    return 0;                                                                   // end the program successfully
}
