#include<stdio.h>                                                               // For printf and scanf
#include<stdlib.h>                                                              // For malloc
// Macro to swap two variables using a temporary variable
#define SWAP(a,b,temp){\
    temp=(a);\
    (a)=(b);\
    (b)=temp;\
}
int main()                                                                      // Main function starts
{
        printf("1. Int\n");                                                     // Display option for int
        printf("2. char\n");                                                    // Display option for char
        printf("3. short\n");                                                   // Display option for short
        printf("4. float\n");                                                   // Display option for float
        printf("5. double\n");                                                  // Display option for double
        printf("6. string\n");                                                  // Display option for string
        
        int choice;                                                             // Variable to store user choice
        printf("Enter you choice : ");                                          // Ask user for choice
        scanf("%d", &choice);                                                   // Read user choice
        
        switch(choice)                                                          // Switch case based on user choice
        {
            case 1:                                                             // Case for int
            {
                int num1,num2, temp;                                            // Declare two integers and temp
                printf("Enter the num1 : ");                                    // Ask first number
                scanf("%d", &num1);                                             // Read first number
                
                printf("Enter the num2 : ");                                    // Ask second number
                scanf("%d", &num2);                                             // Read second number
                
                SWAP(num1, num2, temp);                                         // Swap values
                
                printf("After Swapping :\n");                                   // Display message
                printf("num1 : %d\n", num1);                                    // Print swapped num1
                printf("num2 : %d\n", num2);                                    // Print swapped num2
                
                break;                                                          // Exit case 1
            }
            
            case 2:                                                             // Case for char
            {
                char ch1,ch2, temp;                                             // Declare char variables
                
                //give space while reading char and string without space it reads previous input newline
                printf("Enter the num1 : ");                                    // Ask first character
                scanf(" %c", &ch1);                                             // Read first character
                
                printf("Enter the num2 : ");                                    // Ask second character
                scanf(" %c", &ch2);                                             // Read second character
                
                SWAP(ch1, ch2, temp);                                           // Swap characters
                
                printf("After Swapping :\n");                                   // Display message
                printf("ch1 : %c\n", ch1);                                      // Print swapped ch1
                printf("ch2 : %c\n", ch2);                                      // Print swapped ch2
                
                break;                                                          // Exit case 2
                
            }
            case 3:                                                             // Case for short
            {
                short s1,s2, temp;                                              // Declare short variables
                printf("Enter the num1 : ");                                    // Ask first number
                scanf("%hd", &s1);                                              // Read first short
                
                printf("Enter the num2 : ");                                    // Ask second number
                scanf("%hd", &s2);                                              // Read second short
                
                SWAP(s1, s2, temp);                                             // Swap values
                
                printf("After Swapping :\n");                                   // Display message
                printf("s1 : %hd\n", s1);                                       // Print swapped s1
                printf("s2 : %hd\n", s2);                                       // Print swapped s2
                
                break;                                                          // Exit case 3
                
            }
            case 4:                                                             // Case for float
            {
                float f1,f2, temp;                                              // Declare float variables
                printf("Enter the num1 : ");                                    // Ask first number
                scanf("%f", &f1);                                               // Read first float
                
                printf("Enter the num2 : ");                                    // Ask second number
                scanf("%f", &f2);                                               // Read second float
                
                SWAP(f1, f2, temp);                                             // Swap values
                
                printf("After Swapping :\n");                                   // Display message
                printf("f1 : %f\n", f1);                                        // Print swapped f1
                printf("f2 : %f\n", f2);                                        // Print swapped f2
                
                break;                                                          // Exit case 4
            }
            case 5:                                                             // Case for double
            {
                double d1,d2, temp;                                             // Declare double variables
                printf("Enter the num1 : ");                                    // Ask first number
                scanf("%lf", &d1);                                              // Read first double
                
                printf("Enter the num2 : ");                                    // Ask second number
                scanf("%lf", &d2);                                              // Read second double
                
                SWAP(d1, d2, temp);                                             // Swap values
                
                printf("After Swapping :\n");                                   // Display message
                printf("d1 : %lf\n", d1);                                       // Print swapped d1
                printf("d2 : %lf\n", d2);                                       // Print swapped d2
                
                break;                                                          // Exit case 5
            }
            case 6:                                                             // Case for string
            {
                char *str1;                                                     // Pointer for first string
                char *str2;                                                     // Pointer for second string
                char *temp;                                                     // Pointer for temp
                
                str1 = malloc(50*sizeof(char));                                 // Allocate memory for str1
                str2 = malloc(50*sizeof(char));                                 // Allocate memory for str2
                
                //give space while reading char and string without space it reads previous input newline
                printf("Enter the string 1 : ");                                // Ask first string
                scanf(" %[^\n]",str1);                                          // Read string including spaces
                
                //getchar();
                
                printf("Enter the string 2 : ");                                // Ask second string
                scanf(" %[^\n]",str2);                                          // Read string including spaces
                
                SWAP(str1, str2, temp);                                         // Swap string pointers
                
                printf("After Swapping :\n");                                   // Display message
                printf("str1 : %s\n", str1);                                    // Print swapped string1
                printf("str2 : %s\n", str2);                                    // Print swapped string2
                
                free(str1);
                free(str2);
                
                break;                                                          // Exit case 6
            }
            
            default:                                                            // If invalid choice
                printf("Invalid choice !!");                                    // Print error message
            
            
        }
        
        
    
    return 0;                                                                   // End of program
}