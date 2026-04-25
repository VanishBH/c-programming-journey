#include <stdio.h>                                                              // Header file for standard input/output functions like printf and scanf

// Function to fetch last n bits from the given number
int get_nbits(int num, int n)                                                   // Function definition with parameters num and n
{
    int mask = 1;                                                               // Mask initialized with value 1 (binary: 000...0001)

    // Shift mask n positions left and subtract 1 to create n-bit mask, then AND with num
    return (num & ((mask << n) - 1));
}

int main()                                                                      // Main function where program execution starts
{
    int num, n, res = 0;                                                        // num → input number, n → number of bits, res → result variable
    
    printf("Enter num and n:");                                                 // Ask user to enter the number and number of bits
    scanf("%d%d", &num, &n);                                                    // Read num and n values from the user
    
    res = get_nbits(num, n);                                                    // Call function to extract last n bits and store result
    
    printf("Result = %d\n", res);                                               // Print the result (last n bits of num)
    
    return 0;                                                                   // Return 0 to indicate successful execution of the program
}