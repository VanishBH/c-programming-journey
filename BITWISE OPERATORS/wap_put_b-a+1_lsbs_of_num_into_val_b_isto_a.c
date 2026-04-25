#include <stdio.h> // Header file for standard input and output functions like printf and scanf

// Function to replace bits from position a to b of val with bits from num
int replace_nbits_from_pos(int num, int a, int b, int val)
{
   
    // Calculate how many bits need to be replaced between positions a and b
    int num_of_bits = (b - a + 1);
    
    // Create a mask with 'num_of_bits' number of 1's
    int mask = (1 << num_of_bits) - 1;
    
    // Extract required bits from num and shift them to position 'a'
    int get_bits = ((num & mask) << a);
    
    // Shift mask to position 'a' to clear bits in val
    int n = (mask << a);
    
    // Clear bits from position a to b in val
    int clear_bits = (val & ~(n));
    
    // Insert the extracted bits from num into val
    int ret = (clear_bits | get_bits);
    
    // Return the final result
    return ret;
}

int main()
{
    // Declare variables for num, a, b, val and result
    int num, a, b, val, res = 0;
    
    // Ask user to enter the values
    printf("Enter num, a, b, and val:");
    
    // Read values from user
    scanf("%d%d%d%d", &num, &a, &b, &val);
    
    // Check if positions are within valid range
    if((a <= b <= 31))
    {
        // Call the function to replace bits
        res = replace_nbits_from_pos(num, a, b, val);
    
        // Print the final result
        printf("Result = %d\n", res);
    }
    
}