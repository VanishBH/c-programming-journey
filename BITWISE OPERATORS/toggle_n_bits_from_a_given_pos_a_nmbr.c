
#include <stdio.h>                                                              // Header file for standard input and output functions

// Function to toggle n bits from the given position in the number
int toggle_nbits_from_pos(int num, int n, int pos)
{
    // Create a mask with n number of 1's and shift it to the required position
    int mask = ((1<<n)-1) << (pos - n + 1);
    
    // Use XOR operation to toggle the selected bits
    int get_pos = num ^ mask;
    
    // Return the result after toggling the bits
    return get_pos;
}

int main()
{
    int num, n, pos, res = 0;                                                   // Declare variables for number, number of bits, position and result
    
    printf("Enter num, n and val:");                                            // Ask user to enter the values
    
    scanf("%d%d%d", &num, &n, &pos);                                            // Read num, n and pos from user
    
    res = toggle_nbits_from_pos(num, n, pos);                                   // Call function to toggle n bits from position
    
    printf("Result = %d\n", res);                                               // Print the result after toggling bits
    
    return 0;                                                                   // Indicate successful program termination
}