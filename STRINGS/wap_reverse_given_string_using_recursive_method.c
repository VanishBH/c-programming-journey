#include <stdio.h>                                                              // include standard input output functions like printf and scanf

void reverse_recursive(char str[], int start, int end);   
// function declaration → takes string, starting index and ending index

int main()                                                                      // program execution starts here
{
    char str[100];                                                              // character array to store input string
    int count = 0;                                                              // variable to count number of characters
    int length;                                                                 // variable to store last index of string
    int i;                                                                      // loop variable

                                                                         
    scanf("%[^\n]", str);                                                       // read full line including spaces until newline

    // find length using for loop
    for(i = 0; str[i] != '\0'; i++)                                             // loop until null character found
    {
        count++;                                                                // increase count for each character
    }

    length = count - 1;                                                         // last index = total characters - 1

    reverse_recursive(str, 0, length);                                          // call recursive function to reverse string

    printf("Reversed string is %s", str);                                      // print reversed string

    return 0;                                                                   // end program successfully
}

void reverse_recursive(char str[], int start, int end)  
// recursive function definition
{
    if(start >= end)                                                            // base condition → stop when indexes meet or cross
    {
        return;                                                                 // return back to previous call
    }

    char temp = str[start];                                                     // store starting character in temp
    str[start] = str[end];                                                      // move ending character to start
    str[end] = temp;                                                            // place temp character at end

    reverse_recursive(str, start + 1, end - 1);  
    // recursive call → move start forward and end backward
}
