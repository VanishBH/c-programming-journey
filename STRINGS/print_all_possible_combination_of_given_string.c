#include<stdio.h>                                                               // for printf and scanf functions
#include<stdio.h>                                                               // include standard input output header file → gives printf() and scanf()

void combination(char str[], int start, int end);                               // declare function → will generate all permutations
int my_strlen(char str[]);                                                      // declare function → will calculate string length

int main()                                                                      // starting point of program execution
{
    char str[100];                                                              // declare character array of size 100 → to store input string
    int n;                                                                      // declare integer variable → to store length of string
    
    printf("Enter a string: ");                                                 // print message asking user to enter a string
    scanf("%[^\n]",str);                                                        // read full line including spaces until newline comes

    n = my_strlen(str);                                                         // call length function and store returned value into n

    // start duplicate character checking block
    for(int i=0; str[i]!='\0'; i++)                                             // outer loop → runs until end of string '\0'
    {
        for(int j=i+1; str[j]!='\0'; j++)                                       // inner loop → compares current character with next characters
        {
            if(str[i]==str[j])                                                  // check if any two characters are same
            {
                printf("Error: please enter distinct characters.");             // print error if duplicate found
                return 0;                                                       // stop program execution immediately
            }
        }
    }
    // duplicate checking finished

    printf("All possible combinations of given string :\n");                    // print heading before permutations
    combination(str,0,n-1);                                                     // call recursive function → start=0 first index, end=n-1 last index

    return 0;                                                                   // return 0 to operating system → program finished successfully
}

// function definition to calculate string length
int my_strlen(char str[])                                                       // function receives string as input parameter
{
    int count=0;                                                                // initialize counter variable to 0
    for(int i=0; str[i]!='\0'; i++)                                             // loop until null character '\0' found
    {
        count++;                                                                // increase count for each character
    }
    return count;                                                               // send total character count back to main
}

// recursive function to generate all permutations
void combination(char str[], int start, int end)                                // function receives string + start index + end index
{
    char temp;                                                                  // declare temporary variable → used for swapping characters

    if(start==end)                                                              // base condition → when start index equals end index
    {
        printf("%s\n",str);                                                     // print current arrangement of string (one permutation)
        return;                                                                 // return to previous recursive call
    }

    for(int i=start;i<=end;i++)                                                 // loop from current start index to last index
    {
        temp=str[start];                                                        // store start position character into temp
        str[start]=str[i];                                                      // copy ith character into start position
        str[i]=temp;                                                            // copy temp character into ith position → swap completed

        combination(str,start+1,end);                                           // recursive call → fix next position and continue permutation

        temp=str[start];                                                        // again store start character into temp
        str[start]=str[i];                                                      // restore original character at start position
        str[i]=temp;                                                            // restore original character at ith position → backtracking step
    }
}
