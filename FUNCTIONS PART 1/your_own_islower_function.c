#include <stdio.h>                                                              // Includes standard input and output functions like printf and scanf

int my_islower(int);                                                            // Function declaration: takes an integer (character ASCII value) and returns int

int main()                                                                      // Main function where program execution starts
{
    char ch;                                                                    // Declares a character variable to store the input character
    int ret;                                                                    // Declares an integer variable to store function return value
    
    printf("Enter the character:");                                             // Asks the user to enter a character
    scanf("%c", &ch);                                                           // Reads one character from user and stores it in ch
                                                                                // &ch gives the address of variable ch
                                                                                
    
    ret = my_islower(ch);                                                       // Calls my_islower function and passes the character to it
                                                                                // Returned value is stored in ret
    
    /*
       Based on return value, print whether ch is lower case alphabet or not
    */
    
    if(ret == 1)                                                                // Checks if function returned 1
    {
        printf("Entered character is lower case alphabet");
                                                                                // Prints message if character is lowercase
    }
    else                                                                        // Executes when return value is not 1
    {
        printf("Entered character is not lower case alphabet");
                                                                                // Prints message if character is not lowercase
    }
   
    return 0;                                                                   // Ends the program and returns 0 to the operating system
}

int my_islower(int ch)                                                          // Function definition: receives ASCII value of a character
{
    if(ch >= 'a' && ch <= 'z')                                                  // Checks if character lies between 'a' and 'z'
    {
        return 1;                                                               // Returns 1 if character is lowercase alphabet
    }
    else                                                                        // Executes if character is not lowercase
    {
        return 0;                                                               // Returns 0 if character is not lowercase alphabet
    }
}
