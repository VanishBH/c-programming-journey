#include <stdio.h>                                                              // Header file for standard input/output functions like printf and scanf

// Function to replace last n bits of num with last n bits of val
int replace_nbits(int num, int n, int val)
{
    int mask = (1 << n) - 1;                                                    // Create a mask with n bits set to 1 (example: n=3 → 00000111)
    
    int get_val_bits = val & mask;                                              // Extract the last n bits from val using AND operation
    
    int num_cleared = num & ~mask;                                              // Clear the last n bits of num using AND with inverted mask
    
    int res = get_val_bits | num_cleared;                                       // Insert extracted bits into num using OR operation
    
    return res;                                                                 // Return the updated result
}

int main()
{
    int num, n, val, res = 0;                                                   // num → main number, n → number of bits, val → value to replace bits, res → result
    
    printf("Enter num, n and val:");                                            // Ask the user to enter num, n, and val
    scanf("%d%d%d", &num, &n, &val);                                            // Read the values from the user
    
    res = replace_nbits(num, n, val);                                           // Call the function to replace bits and store result
    
    printf("Result = %d\n", res);                                               // Print the updated result
}