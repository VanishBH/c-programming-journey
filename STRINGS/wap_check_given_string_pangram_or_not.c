
#include <stdio.h>                                                              // include standard input output header for printf and scanf

int pangram(char str[]);                                                        // function declaration: checks whether string is pangram or not

int main()
{
    char str[100];                                                              // declare character array to store input string (max 99 chars + '\0')
    scanf("%[^\n]",str);                                                        // read full line including spaces until newline

    int result= pangram(str);                                                   // call pangram function and store returned value

    if(result==0)                                                               // if function returns 0 → string is pangram
    {
        printf("The Entered String is a Pangram String");                       // print pangram message
    }
    else                                                                        // if function returns non-zero → not pangram
    {
        printf("The Entered String is not a Pangram String");                   // print not pangram message
    }
    return 0;                                                                   // terminate program successfully
}

int pangram(char str[])
{
    int index;                                                                  // variable to store alphabet array index
    int alphabet[26]={0};                                                       // array of 26 elements to track letters a–z, initialized to 0

    for(int i=0; str[i]!='\0'; i++)                                             // loop through each character of string until null terminator
    {
        char ch = str[i];                                                       // store current character from string

        if(ch>='a' && ch<='z')                                                  // check if character is lowercase alphabet
        {
            index = ch - 'a';                                                   // convert lowercase character to index (0–25)
            alphabet[index] = 1;                                                // mark that alphabet as found
        }
        else if(ch>='A' && ch<='Z')                                             // check if character is uppercase alphabet
        {
            index = ch - 'A';                                                   // convert uppercase character to index (0–25)
            alphabet[index] = 1;                                                // mark that alphabet as found
        }
    }

    int flag=0;                                                                 // flag variable to check missing alphabet
    for(int i=0; i<26; i++)                                                     // loop through all alphabet positions
    {
        if(alphabet[i]==0)                                                      // if any alphabet not found
        {
            flag=1;                                                             // set flag to indicate not pangram
            break;                                                              // stop checking further
        }
    }

    if(flag==0)                                                                 // if no missing alphabets
    {
        return 0;                                                               // return 0 → pangram
    }
    else                                                                        // if any alphabet missing
    {
        return 1;                                                               // return 1 → not pangram
    }
}
