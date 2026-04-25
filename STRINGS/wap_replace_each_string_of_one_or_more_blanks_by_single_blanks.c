#include <stdio.h>                                                              // include standard input output library for printf and scanf

void replace_blank(char str[]);                                                 // function declaration → tells compiler function exists

int main()                                                                      // main function → program starts execution from here
{
    char str[100];                                                              // create character array to store string (max 100 chars)
    
    printf("Enter the string with more spaces in between two words\n");  
                                                                                // print message asking user to enter string

    scanf("%[^\n]", str);                                                       // read full line including spaces until newline '\n'
        
    replace_blank(str);                                                         // call function and send string to remove extra blanks
    
    printf("%s\n", str);                                                        // print modified string after removing extra spaces
    
    return 0;                                                                   // return 0 → program finished successfully
}

void replace_blank(char str[])                                                  // function definition → receives string
{
    for(int i=0; str[i]!='\0'; i++)                                             // loop through string until null character '\0'
    {
        if(str[i] == '\t')                                                      // check if current character is tab space
        {
            str[i]=' ';                                                         // convert tab into normal single space
        }
        
        if(str[i]==' ' && str[i+1]==' ')                                        // check if two continuous spaces exist
        {
            for(int j=i; str[j]!='\0'; j++)                                     // shift characters left to remove extra space
            {
                str[j]=str[j+1];                                                // copy next character into current position
            }
            i--;                                                                // move index one step back to recheck same position
        }
    }
}
