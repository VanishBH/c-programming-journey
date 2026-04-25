
#include <stdio.h>                                                              // for printf, scanf
#include <string.h>                                                             // (not strictly needed here, but commonly included)
#include <stdio_ext.h>                                                          // for __fpurge (to clear buffer in GNU)


// Custom strtok function declaration
char *my_strtok(char str[], const char delim[]);

int main()
{
    char str[50], delim[50];                                                    // str → input string, delim → delimiter characters

    scanf("%s", str);                                                           // read main string (no spaces allowed)

    __fpurge(stdout);                                                           // clear output buffer (not mandatory, GNU specific)

    printf("Enter the delimeter : ");
    scanf("\n%s", delim);                                                       // read delimiter string (characters used to split)

    __fpurge(stdout);                                                           // clear buffer again

    char *token = my_strtok(str, delim);                                        // first call → pass string → get first token

    printf("Tokens :\n");

    // keep calling until function returns NULL (no more tokens)
    while (token != NULL)
    {
        printf("%s\n", token);                                                  // print current token
        token = my_strtok(NULL, delim);                                         // next calls → pass NULL → continue from previous position
    }
}

char *my_strtok(char str[], const char delim[])
{
    static char *ptr;                                                           // static pointer → remembers original string between calls
    static int i = 0;                                                           // static index → remembers current scanning position
    int start;                                                                  // start index of current token

    // If new string passed → initialize pointer and reset index
    if (str != NULL)
    {
        ptr = str;                                                              // store starting address of string
        i = 0;                                                                  // start scanning from beginning
    }

    // -------- Skip leading delimiters --------
    // Move forward until we find a non-delimiter character
    while (ptr[i] != '\0')
    {
        int j = 0, is_delim = 0;                                                // flag to check whether current char is delimiter

        // check current character against every delimiter character
        while (delim[j] != '\0')
        {
            if (ptr[i] == delim[j])                                             // if match → current char is delimiter
            {
                is_delim = 1;
                break;
            }
            j++;
        }

        if (!is_delim)                                                          // if not delimiter → token starts here
            break;

        i++;                                                                    // else skip delimiter and move forward
    }

    start = i;                                                                  // mark start of token after skipping delimiters

    // -------- Scan until next delimiter --------
    while (ptr[i] != '\0')
    {
        int j = 0;

        // check if current character matches any delimiter
        while (delim[j] != '\0')
        {
            if (ptr[i] == delim[j])                                             // delimiter found → token ends here
            {
                ptr[i] = '\0';                                                  // replace delimiter with NULL → terminate token string
                i++;                                                            // move index forward for next call
                return ptr + start;                                             // return starting address of token
            }
            j++;
        }
        i++;   // move to next character if not delimiter
    }

    // -------- End of string reached --------
    // If some characters remain → last token
    if (ptr[start] != '\0')
        return ptr + start;

    // else no more tokens → return NULL
    else
        return NULL;
}
