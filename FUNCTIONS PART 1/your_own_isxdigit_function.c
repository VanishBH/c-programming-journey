#include <stdio.h>                                                              // Includes standard input-output functions like printf and scanf

int is_xdigit(int);                                                             // Function declaration: takes an integer (ASCII value of a character) and returns int

int main()                                                                      // Main function where program execution starts
{
    char ch;                                                                    // Declares a variable 'ch' of type char to store the input character
    short ret;                                                                  // Declares a variable 'ret' of type short to store function return value
    
    printf("Enter a character: ");                                              // Prints message asking user to enter a character
    scanf("%c", &ch);                                                           // Reads one character from user and stores it in 'ch'
                                                                                // '&ch' gives the address of variable ch
    
    ret = is_xdigit(ch);                                                        // Calls is_xdigit function with 'ch' and stores returned value in 'ret'
    
    /* Based on the return value of the function, print the message */
    
    if(ret == 1)                                                                // Checks if returned value is 1 (character is a hexadecimal digit)
    {
        printf("Entered character is an hexadecimal digit");                    // Prints message if character is hexadecimal
    }
    else                                                                        // Executes if return value is not 1
    {
        printf("Entered character is not an hexadecimal digit");                // Prints message if character is not hexadecimal
    }
    
    return 0;                                                                   // Ends the program and returns 0 to the operating system
}

int is_xdigit(int ch)                                                           // Function definition: receives a character as int
{
    
    // Checks if character is a digit (0-9) OR lowercase hex (a-f) OR uppercase hex (A-F)
    if(ch >= '0' && ch <= '9' || ch >= 'a' && ch <= 'f' || ch >= 'A' && ch <= 'F')
    {
        return 1;                                                               // Returns 1 if the character is a hexadecimal digit
    }
    else                                                                        // Executes if character is not a hexadecimal digit
    {
        return 0;                                                               // Returns 0 if the character is not a hexadecimal digit
    }
}
