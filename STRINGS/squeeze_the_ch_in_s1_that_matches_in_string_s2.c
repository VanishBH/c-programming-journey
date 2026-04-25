
#include <stdio.h>                                                              // include standard input output header file for printf and scanf

void squeeze(char str1[], const char str2[]);                                   // function declaration → removes characters of str2 from str1

int main()                                                                      // main function → program starting point
{
    char str1[100], str2[100];                                                  // declare two character arrays to store input strings
    
    printf("Enter string1:");                                                   // ask user to enter first string
    scanf("%[^\n]", str1);                                                      // read full line including spaces into str1 until newline
    
    getchar();                                                                  // read leftover newline character from input buffer
    
    printf("Enter string2:");                                                   // ask user to enter second string
    scanf("%[^\n]", str2);                                                      // read full line including spaces into str2
    
    squeeze(str1, str2);                                                        // call squeeze function to remove characters
    
    printf("After squeeze s1 : %s\n", str1);                                    // print modified string1
    
    return 0;                                                                   // end program successfully
}

void squeeze(char str1[], const char str2[])                                    // function definition → remove characters of str2 from str1
{
    int i,j,k;                                                                  // declare loop variables
    
    for(i=0; str1[i]!='\0'; i++ )                                               // loop through each character of str1 until end of string
    {
        for(j=0; str2[j]!='\0'; j++)                                            // loop through each character of str2
        {
            if (str1[i]== str2[j])                                              // check if current character of str1 matches any character of str2
            {
                 for(int k=i; str1[k]!='\0'; k++)                               // shift characters left starting from match position
                {
                    str1[k]=str1[k+1];                                          // copy next character into current position
                }
                i--;                                                            // move index back to recheck new character at same position
                break;                                                          // exit inner loop since match already handled
            }
        }
    }
}
