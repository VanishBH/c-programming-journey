
#include <stdio.h>                                                              // Header file for standard input and output functions

// Function to perform circular right shift
int circular_right(int num, int n)
{
    int mask = (1<<n) - 1;                                                      // Create mask with n number of 1's to extract n LSB bits
    
    int get_n_bits_lsb_of_num = num & mask;                                     // Extract n least significant bits from num
    
    int left_shift_of_get_n_bits_lsb_of_num = get_n_bits_lsb_of_num << (32 - n);  
    // Move extracted LSB bits to the MSB position
    
    unsigned int shift_right_num = (unsigned int)num >> n;  
    // Shift the original number right by n bits
    
    int res = shift_right_num | left_shift_of_get_n_bits_lsb_of_num;  
    // Combine shifted number and wrapped bits
    
    return res;                                                                 // Return the circularly shifted result
}

// Function to print binary representation of result
int print_bits(int ret)
{
    printf("\nResult in Binary: ");
    for(int i = 31; i >= 0; i--)                                                // Loop from MSB (bit 31) to LSB (bit 0)
    {
        if(ret & (1<<i))                                                        // Check if the ith bit is set
        {
            printf(" 1 ");                                                      // Print 1 if bit is set
        }
        else
        {
            printf(" 0 ");                                                      // Print 0 if bit is not set
        }
    }
}

int main()
{
    int num, n, ret;                                                            // Declare variables for number, shift value, and result
    
    printf("Enter the num:");                                                   // Ask user to enter the number
    scanf("%d", &num);                                                          // Read number from user
    
    //printf("Enter n:");                                                         // Ask user to enter number of bits to shift
    scanf("%d", &n);                                                            // Read shift value
    
    ret = circular_right(num, n);                                               // Call function to perform circular right shift
    
    print_bits(ret);                                                            // Print result in binary format
}