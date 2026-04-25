#include <stdio.h>                                                              // Header file for standard input and output functions

// Function to perform circular left shift
int circular_left(int num, int n)
{
    int mask =(1<<n)-1 ;                                                        // Create mask with n number of 1's (example: n=3 → 000...0111)
    
    int shift_mask_to_left = mask<<(32 - n);                                    // Move mask to the MSB side to extract top n bits
    
    int get_n_bits_from_num = num & shift_mask_to_left;                         // Extract the leftmost n bits from num
    
    unsigned int shift_get_n_bits_right = (unsigned int)get_n_bits_from_num >> (32 - n); 
    // Move extracted bits to the rightmost side
    
    int shift_num = num << n;                                                   // Shift the original number left by n bits
    
    int res = shift_num | shift_get_n_bits_right;                               // Combine shifted number and extracted bits
    
    return res;                                                                 // Return the circularly shifted result
}

// Function to print binary representation
int print_bits(int ret)
{
    printf("Result in binary:");                                                // Print message
    
    for(int i=31; i>=0; i--)                                                    // Loop from MSB (bit 31) to LSB (bit 0)
    {
        if(ret &(1<<i))                                                         // Check if the ith bit is 1
        {
            printf(" 1 ");                                                      // Print 1 if bit is set
        }
        else
        {
            printf(" 0 ");                                                      // Print 0 if bit is not set
        }
    }
}

// Main function (program execution starts here)
int main()
{
    int num, n, ret;                                                            // Declare variables for number, shift value, and result
    
    printf("Enter the num:");                                                   // Ask user to enter the number
    scanf("%d", &num);                                                          // Read the number from user
    
    printf("Enter n:");                                                         // Ask user to enter number of bits to shift
    scanf("%d", &n);                                                            // Read shift value
    
    ret = circular_left(num, n);                                                // Call function to perform circular left shift
    
    print_bits(ret);                                                            // Print result in binary format
    
    return 0;                                                                   // Indicate successful program execution
}