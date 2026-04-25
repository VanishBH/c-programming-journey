
#include <stdio.h>                                                              // Standard input-output library for printf and scanf

// Function to extract n bits from position 'pos' of number 'num'
int get_nbits_from_pos(int num, int n, int pos)
{
    // Create a mask with n number of 1's and shift it to the required position
    int mask = ((1<<n)-1)<<(pos - n +1);
    
    // Perform AND operation with num to fetch only the required bits
    int get_pos = num & mask;
    
    // Shift the extracted bits to LSB so that we get the decimal value
    int shift_lsb = get_pos >> (pos - n +1);
   
    // Return the extracted value
    return shift_lsb;
}

int main()
{
    int num, n, pos, res = 0;                                                   // Declare variables for number, bit count, position, and result
    
    printf("Enter num, n and val:");                                            // Prompt user to enter input values
    
    scanf("%d%d%d", &num, &n, &pos);                                            // Read number, number of bits, and position from user
    
    res = get_nbits_from_pos(num, n, pos);                                      // Call function to extract bits
    
    printf("Result = %d\n", res);                                               // Print the decimal value of extracted bits
}