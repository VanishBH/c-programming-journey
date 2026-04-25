#include<stdio.h>                                                               // Header file for standard input/output functions (printf, scanf)

// Function to count number of set bits (1s) in the given number
int count_set_bits(int num)                                                     // Function definition that takes an integer num as argument
{
    int mask = 1;                                                               // Mask value used to check each bit (binary: 0000...0001)
    int count = 0;                                                              // Variable to store the number of set bits

    for(int i = 31; i >= 0; i--)                                                // Loop from bit position 31 (MSB) to 0 (LSB) for a 32-bit integer
    {
        if(num & (mask << i))                                                   // Shift mask to ith position and check if that bit in num is 1
        {
            count++;                                                            // If the bit is set (1), increase the set bit counter
        }
    }

    return count;                                                               // Return the total number of set bits to the calling function
}

// Function to check parity (odd or even) of set bits
void check_parity(int count)                                                    // Function definition that takes number of set bits as argument
{
    int mask = 1;                                                               // Mask used to check the least significant bit

    if(count & mask)                                                            // Check the LSB of count (if it is 1 → odd number)
    {
        printf("Bit parity is Odd\n");                                          // Print message if number of set bits is odd
    }
    else                                                                        // If LSB is 0 → even number
    {
        printf("Bit parity is Even\n");                                         // Print message if number of set bits is even
    }
}

int main()                                                                      // Main function where program execution starts
{
    int num;                                                                    // Variable to store the number entered by the user

    printf("Enter the number : ");                                              // Prompt message asking user to enter a number
    scanf("%d", &num);                                                          // Read the integer value entered by the user and store in num

    int count = count_set_bits(num);                                            // Call function to count set bits and store result in count

    printf("Number of set bits = %d\n", count);                                 // Print the number of set bits

    check_parity(count);                                                        // Call function to check whether set bits are odd or even

    return 0;                                                                   // Return 0 to indicate successful program execution
}