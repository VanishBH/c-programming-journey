#include<stdio.h>                                                               // Header file for standard input and output functions (printf, scanf)

int main()                                                                      // Main function where program execution starts
{
    int num;                                                                    // Variable to store the number entered by the user
    scanf("%d",&num);                                                           // Read the integer value from the user and store it in num
    
    int n;                                                                      // Variable to store the bit position to check
    scanf("%d", &n);                                                            // Read the value of n from the user
    
    int m;                                                                      // Variable to store the bit position to clear
    scanf("%d", &m);                                                            // Read the value of m from the user
    
    int mask = 1;                                                               // Mask used for bit manipulation (binary value 000...0001)
    
    if(num & (mask<<n))                                                         // Check if the nth bit of num is set (1)
    {
        // If nth bit is 1, clear the mth bit using AND with inverted mask
        printf("Updated value of num is %d",(num & (~(mask<<m))));
    }
    else                                                                        // If the nth bit is not set (0)
    {
        // Print the original number without any change
        printf("Updated value of num is %d", num);
    }
      
    return 0;                                                                   // Return 0 to indicate successful execution of the program
}