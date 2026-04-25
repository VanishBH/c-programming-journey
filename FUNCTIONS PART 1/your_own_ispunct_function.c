#include <stdio.h>                                                              // Includes standard input-output functions like printf and scanf

int my_ispunct(int);                                                            // Function declaration: takes an integer (ASCII value of a character) and returns int

int main()                                                                      // Main function where program execution starts
{
    char ch;                                                                    // Declares a variable 'ch' of type char to store the input character
    int ret;                                                                    // Declares a variable 'ret' of type int to store function return value
    
    printf("Enter the character:");                                             // Prints message asking user to enter a character
    scanf("%c", &ch);                                                           // Reads one character from user and stores it in 'ch'
                                                                                // '&ch' gives the address of variable ch
                                                                                
    
    ret = my_ispunct(ch);                                                       // Calls my_ispunct function with 'ch' and stores returned value in 'ret'
    
    // Based on return value, print whether the character is punctuation or not
    
    if(ret == 1)                                                                // Checks if returned value is 1 (character is punctuation)
    {
        printf("Entered character is punctuation character");                   // Prints message if character is punctuation
    }
    else                                                                        // Executes if returned value is 0
    {
        printf("Entered character is not punctuation character");               // Prints message if character is not punctuation
    }
   
    return 0;                                                                   // Ends program and returns 0 to the operating system
}

int my_ispunct(int ch)                                                          // Function definition: receives a character as int
{
    // Check if character is a letter (a-z, A-Z) or digit (0-9)
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
    {
        return 0;                                                               // Returns 0 if character is NOT punctuation
    }
    else                                                                        // Executes if character is NOT a letter or digit
    {
        return 1;                                                               // Returns 1 if character is punctuation
    }
}
