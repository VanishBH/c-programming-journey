#include <stdio.h>                                                              // Include standard input-output header file

int getword(char str[])                                                         // Function to process string and return length
{
    int count = 0;                                                              // Variable to count characters

    while (*str != '\0')                                                        // Loop until end of string is reached
    {
        count++;                                                                // Increase character count by 1
        str++;                                                                  // Move pointer to next character

        if (*str == ' ')                                                        // Check if current character is a space
        {
            *str = '\0';                                                        // Replace space with null character
        }
    }

    return count;                                                               // Return total character count
}

int main()                                                                      // Main function starts
{
    int len = 0;                                                                // Variable to store returned length
    char str[100];                                                              // Character array to store input string

    printf("Enter the string : ");                                              // Ask user to enter a string
    scanf(" %[^\n]", str);                                                      // Read entire line including spaces

    len = getword(str);                                                         // Call function and store returned value

    printf("You entered %s and the length is %d\n", str, len);                  // Print result
}
