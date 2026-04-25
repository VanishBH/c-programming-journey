#include <stdio.h>                                                              // header file for input and output functions like printf and scanf

// function declaration to generate NRPS string
void generate_nrps(char ch[], int C, int N);

int main()
{
    int C, N;                                                                   // C = number of distinct characters, N = length of output string
    char ch[100];                                                               // array to store characters

    // asking user to enter number of characters
    printf("Enter the number characters C : ");
    scanf("%d", &C);

    // asking user to enter length of the string
    printf("Enter the Length of the string N : ");
    scanf("%d", &N);

    // asking user to enter distinct characters
    printf("Enter %d distinct characters : ", C);

    // loop to read C characters from user
    for(int i = 0; i < C; i++)
    {
        scanf(" %c", &ch[i]);                                                   // store each character in array
    }

    int flag = 0;                                                               // flag variable to check duplicate characters

    // loop to check whether characters are distinct
    for(int i = 0; i < C; i++)
    {
        for(int j = i + 1; j < C; j++)
        {
            // compare characters
            if(ch[i] == ch[j])
            {
                flag = 1;                                                       // if duplicate found set flag
                break;                                                          // exit inner loop
            }
        }
    }

    // if duplicate characters are found
    if(flag == 1)
    {
        printf("Error : Enter distinct characters\n");
        return 0;                                                               // terminate program
    }

    // call function to generate NRPS string
    generate_nrps(ch, C, N);

    return 0;                                                                   // end of main function
}


// function definition to generate NRPS
void generate_nrps(char ch[], int C, int N)
{
    int index = 0;                                                              // variable to track which character to print

    printf("Possible NRPS is ");

    // loop runs N times to print N characters
    for(int i = 0; i < N; i++)
    {
        printf("%c", ch[index]);                                                // print current character

        index++;                                                                // move to next character

        // if index reaches C, start again from 0
        if(index == C)
        {
            index = 0;
        }

        // after printing C characters rotate the array
        if((i + 1) % C == 0)
        {
            char temp = ch[0];                                                  // store first character

            // shift characters to left
            for(int j = 0; j < C - 1; j++)
            {
                ch[j] = ch[j + 1];
            }

            ch[C - 1] = temp;                                                   // place first character at last position
        }
    }

    printf("\n");                                                               // print new line after output
}