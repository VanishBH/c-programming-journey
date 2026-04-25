#include<stdio.h>                                                               // Include standard input-output header file

// Function to convert little endian data to big endian
void little_to_big_endian(char *ptr, int size)                                  // ptr points to bytes of the number, size is number of bytes
{
  
    for(int i=0; i<size/2; i++)                                                 // Loop to swap bytes from start and end
    {
        char temp = ptr[i];                                                     // Store current byte in temporary variable

        ptr[i] = ptr[size-1-i];                                                 // Copy last byte to the current position

        ptr[size-1-i] = temp;                                                   // Place stored byte into last position
    }
  
}

int main()
{
    int size;                                                                   // Variable to store size of datatype

    printf("Enter the size: ");                                                 // Ask user to enter size (2 or 4)

    scanf("%d", &size);                                                         // Read size from user
    
  
    if(size==2 || size==4)                                                      // Check if size is valid (2 bytes or 4 bytes)
    {
        int num;                                                                // Variable to store hexadecimal number

        printf("Enter any number in Hexadecimal: ");                            // Ask user to enter hex number

        scanf("%x", &num);                                                      // Read hexadecimal value from user

        little_to_big_endian((char*)&num, size);                                // Pass address of num as byte pointer to swap bytes
        
        printf("After conversion %x", num);                                     // Print converted big endian value
    }
    
    return 0;                                                                   // End of program
}