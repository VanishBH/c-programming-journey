#include <stdio.h>                                                              // Includes standard input-output functions like printf and scanf

int my_isalnum(char);                                                           // Function declaration: my_isalnum takes a character and returns an int

int main()                                                                      // Main function where program execution starts
{
    char ch;                                                                    // Declares a variable 'ch' of type char to store one character
    int ret;                                                                    // Declares an integer variable 'ret' to store return value
    
    
    printf("Enter the character:");                                             // Prints message asking user to enter a character
    scanf("%c", &ch);                                                           // Reads one character from user and stores it in 'ch'
                                                                                // '&ch' gives the address of variable ch
                                                                                
                                                                                
                                                                                // Calls my_isalnum function and stores returned value in 'ret'
    ret = my_isalnum(ch);
    
        //Based on return value, print whether ch is alphanumeric or not
        
        if(ret==1)                                                              // Checks if returned value is 1
        {
            printf("Entered character is alphanumeric character");              // Prints message if character is letter or digit

        }
        else                                                                    // Executes if ret is not equal to 1
        {
            printf("Entered character is not alphanumeric character");          // Prints message if character is not letter or digit
        }
        
    return 0;                                                                   // Ends program and returns 0 to operating system
}

int my_isalnum(char ch)                                                         // Function definition: receives one character as parameter
{
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z' || ch>='0' && ch<='9')          // Checks if character is uppercase letter OR lowercase letter OR digit
    {
        return 1;                                                               // Returns 1 if character is alphanumeric
        
    }
    else                                                                        // Executes if character is not alphanumeric
    {
        return 0;                                                               // Returns 0 if character is not alphanumeric
    }
}