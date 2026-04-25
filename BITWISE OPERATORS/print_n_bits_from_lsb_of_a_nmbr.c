#include <stdio.h>                                                              // Header file for standard input and output functions like printf and scanf

// Function to check whether the nth bit of num is 1 or 0
int print_bits(int num, int n)
{
    int mask = 1;                                                               // Mask value 1 (0001) used for shifting to check specific bit

    // Check if nth bit is set
    if(num & (mask << n))                                                       // Shift mask n times and perform AND with num
    {
        return 1;                                                               // If result is non-zero, the bit is 1
    }
    else
    {
        return 0;                                                               // If result is zero, the bit is 0
    }
}

int main()
{
    int num, n;                                                                 // num = number to print in binary, n = number of bits to display

    printf("Enter num, n :\n");                                                 // Ask user to enter number and number of bits
    scanf("%d%d", &num, &n);                                                    // Read values from user

    printf("Binary form of %d:", num);                                          // Print message with the number

    int res;                                                                    // Variable to store result returned by function

    // Loop from most significant bit (n-1) to least significant bit (0)
    for(int i = n-1; i >= 0; i--)
    {
        res = print_bits(num, i);                                               // Call function to check ith bit

        if(res == 1)                                                            // If bit is 1
        {
            printf(" 1 ");                                                      // Print 1
        }
        else if(res == 0)                                                       // If bit is 0
        {
            printf(" 0 ");                                                      // Print 0
        }
    }

    return 0;                                                                   // Indicate successful program execution
}