#include <stdio.h>                                                              // include standard input output functions like printf and scanf

void reverse_iterative(char str[]);                                             // function declaration → takes a string array and returns nothing

int main()                                                                      // main function → program execution starts here
{
    char str[100];                                                              // declare character array of size 100 to store string

    scanf("%[^\n]", str);                                                       // read full string from user including spaces until newline

    reverse_iterative(str);                                                     // call reverse function and send string to it

    printf("Reversed string is %s\n", str);                                     // print reversed string

}                                                                               // end of main function

void reverse_iterative(char str[])                                              // function definition → receives string
{
    int length;                                                                 // variable to store last index position
    int count = 0;                                                              // variable to count number of characters
    int i = 0;                                                                  // loop control variable

    for(i = 0; str[i] != '\0'; i++)                                             // loop until end of string (null character)
    {
        count++;                                                                // increase count for each character
    }

    length = count - 1;                                                         // last index = total characters (including null) - 1

    for(i = 0; i <= length/2; i++)                                              // loop until middle of string for swapping
    {
        char temp = str[i];                                                     // store first character in temp variable
        str[i] = str[length - i];                                               // replace first character with last character
        str[length - i] = temp;                                                 // place stored character at last position
    }
}                                                                               // end of reverse function
