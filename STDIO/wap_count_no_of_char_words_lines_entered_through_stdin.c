#include<stdio.h>                                                               // For input/output functions like printf(), getchar()
#include<string.h>                                                              // String header (not really needed here but included)


// Function declaration to count characters, words, and lines
void wc_count(int *ch_count, int *word_count, int *line_count);

int main()
{   
    int ch_count = 0;                                                           // Variable to store number of characters
    int line_count = 0;                                                         // Variable to store number of lines
    int word_count = 0;                                                         // Variable to store number of words
    
    // Function call, sending addresses of variables so they can be updated
    wc_count(&ch_count, &word_count, &line_count);
    
    // Print total character count
    printf("Character count = %d\n", ch_count);
    
    // Print total line count
    printf("Line count = %d\n", line_count);
    
    // Print total word count
    printf("Word count = %d\n", word_count);
    
    return 0;                                                                   // Program ends successfully
}


// Function definition to count characters, words, and lines
void wc_count(int *ch_count, int *word_count, int *line_count)
{
    int ch;                                                                     // Variable to store each character from input
    int word_in = 0;                                                            // Flag to track if we are inside a word (0 = no, 1 = yes)

    // Read characters one by one until End Of File (EOF)
    for(ch = getchar(); ch != EOF; ch = getchar())
    {
         (*ch_count)++;                                                         // Increment character count for every character read
         
         // Check if character is newline
         if(ch == '\n')
         {
             (*line_count)++;                                                   // Increment line count
         }

         // If space, newline, or tab occurs → word boundary
         if(ch == ' ' || ch == '\n' || ch == '\t')
         {
             word_in = 0;                                                       // We are no longer inside a word
         }

         // If a non-space character appears and we were not in a word
         else if(word_in == 0)
         {
             (*word_count)++;                                                   // New word detected → increment word count
             word_in = 1;                                                       // Mark that we are inside a word
         }
    }
}