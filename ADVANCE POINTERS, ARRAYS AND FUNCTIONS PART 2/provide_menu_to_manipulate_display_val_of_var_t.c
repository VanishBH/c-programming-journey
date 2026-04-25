#include<stdio.h>                                                               // Include standard input-output functions
#include<stdlib.h>                                                              // Include memory allocation and exit functions

int char_flag1 = 0;                                                             // Flag to check if first char is stored
int char_flag2 = 0;                                                             // Flag to check if second char is stored
int short_flag = 0;                                                             // Flag to check if short is stored
int int_flag = 0;                                                               // Flag to check if int is stored
int float_flag = 0;                                                             // Flag to check if float is stored
int double_flag = 0;                                                            // Flag to check if double is stored

void add_element(void *ptr)                                                     // Function to add element into memory
{
    int type_choice;                                                            // Variable to store user choice

    printf("Enter the choice you have to insert:\n");                           // Display type menu
    printf("1.int\n");                                                          // Option for int
    printf("2.char\n");                                                         // Option for char
    printf("3.short\n");                                                        // Option for short
    printf("4.float\n");                                                        // Option for float
    printf("5.double\n");                                                       // Option for double
        
    scanf("%d", &type_choice);                                                  // Read user choice
        
    switch(type_choice)                                                         // Select type based on user input
    {
        case 1: // int
            if(int_flag==0 && float_flag==0 && double_flag==0)                  // Check if memory is free for int
            {
                printf("Enter the int : ");                                     // Prompt for int
                scanf("%d",((int*)ptr)+1);                                      // Store int at memory location
                int_flag = 1;                                                   // Mark int as stored
            }
            break;

        case 2:// char 
            if(char_flag1==0 && double_flag==0 )                                // first byte check
            {
                printf("Enter the char : ");                                    // Prompt for char
                scanf(" %c",(char *)ptr);                                       // Store char at first byte
                char_flag1=1;                                                   // Mark first char used
            }
            else if(char_flag2==0 && double_flag==0)                            // second byte check
            {
                printf("Enter the char : ");                                    // Prompt for char
                scanf(" %c",((char *)ptr)+1);                                   // Store char at second byte
                char_flag2=1;                                                   // Mark second char used
            }
            break;

        case 3:// short
            if(short_flag==0 && double_flag==0)                                 // Check if memory is free for short
            {
                printf("Enter the short : ");                                   // Prompt for short
                scanf("%hd",((short*)ptr)+1);                                   // Store short value
                short_flag = 1;                                                 // Mark short used
            }
            break;
                
        case 4:// float
            if(int_flag==0 && float_flag==0 && double_flag==0)                  // Check memory for float
            {
                printf("Enter the float : ");                                   // Prompt for float
                scanf("%f",((float*)ptr)+1);                                    // Store float value
                float_flag = 1;                                                 // Mark float used
            }
            break;
                
        case 5: // double
            if(int_flag==0 && char_flag1==0 && char_flag2==0 && short_flag==0 && float_flag==0 && double_flag==0)   // Check full memory free
            {
                printf("Enter the double : ");                                  // Prompt for double
                scanf("%lf",(double*)ptr);                                      // Store double value
                double_flag = 1;                                                // Mark double used
            }
            break;
    }
}

void remove_element(void *ptr)                                                  // Function to remove element
{
    int delete_choice;                                                          // Variable to store index to delete

    if(char_flag1==1 && char_flag2==1)                                          // If both chars exist
    {
        printf("0 -> %c\n", *(char *)ptr);                                      // Display first char
        printf("1 -> %c\n", *((char *)ptr + 1));                                // Display second char
    }
    else if(char_flag1==1 && char_flag2==0) 
    {
        printf("0 -> %c\n", *(char *)ptr);                                      // Display first char
    }
    else if(char_flag1==0 && char_flag2==1) 
    {
        printf("1 -> %c\n", *((char *)ptr + 1));                                // Display second char
    }

    if(int_flag==1)   // If int exists
    {
        printf("2 -> %d\n", *((int*)ptr)+1);                                    // Display int value
    }

    if(short_flag==1)   // If short exists
    {
        printf("3 -> %hd\n", *((short*)ptr+1));                                 // Display short value
    }

    if(float_flag==1)   // If float exists
    {
        printf("4 -> %f\n", *((float*)ptr+1));                                  // Display float value
    }

    if(double_flag==1)   // If double exists
    {
        printf("5 -> %lf\n", *(double*)ptr);                                    // Display double value
    }

    printf("Enter the index value to be deleted : ");   // Ask index
    scanf("%d", &delete_choice);   // Read index

    switch(delete_choice)   // Perform delete
    {
        case 0:
            char_flag1 = 0;   // Remove first char
            printf("index %d successfully deleted.\n", delete_choice);
            break;

        case 1:
            char_flag2 = 0;   // Remove second char
            printf("index %d successfully deleted.\n", delete_choice);
            break;

        case 2:
            int_flag = 0;   // Remove int
            printf("index %d successfully deleted.\n", delete_choice);
            break;

        case 3:
            short_flag = 0;   // Remove short
            printf("index %d successfully deleted.\n", delete_choice);
            break;

        case 4:
            float_flag = 0;   // Remove float
            printf("index %d successfully deleted.\n", delete_choice);
            break;

        case 5:
            double_flag = 0;   // Remove double
            printf("index %d successfully deleted.\n", delete_choice);
            break;

        default:
            printf("Invalid index\n");                                          // Invalid choice
    }
}

void display_element(void *ptr)                                                 // Function to display elements
{
    if(char_flag1==1 && char_flag2==1)
    {
        printf("0 -> %c\n", *(char *)ptr);                                      // Show first char
        printf("1 -> %c\n", *((char *)ptr + 1));                                // Show second char
    }
    else if(char_flag1==1 && char_flag2==0) 
    {
        printf("0 -> %c\n", *(char *)ptr);                                      // Show first char
    }
    else if(char_flag1==0 && char_flag2==1) 
    {
        printf("1 -> %c\n", *((char *)ptr + 1));                                // Show second char
    }

    if(int_flag==1)
    {
        printf("2 -> %d\n", *((int*)ptr+1));                                    // Show int value
    }

    if(short_flag==1)
    {
        printf("3 -> %hd\n", *((short*)ptr+1));                                 // Show short value
    }

    if(float_flag==1)
    {
        printf("4 -> %f\n", *((float*)ptr+1));                                  // Show float value
    }

    if(double_flag==1)
    {
        printf("5 -> %lf\n", *(double*)ptr);                                    // Show double value
    }
}

int exit_program(void *ptr)                                                     // Function to exit program
{
    free(ptr);                                                                  // Free allocated memory
    exit(0);                                                                    // Terminate program
}

int main()
{
    int choice;                                                                 // Variable to store menu choice
    
    void *ptr = malloc(8);                                                      // Allocate 8 bytes memory
    
    if(ptr == NULL)                                                             // Check if allocation failed
    {
        return 1;                                                               // Exit if memory not allocated
    }
    
    do                                                                          // Loop until user exits
    {
        printf("\nmenu :\n");                                                   // Display menu
        printf("1.Add element\n");
        printf("2.Remove element\n");
        printf("3.Display element\n");
        printf("4.Exist from the program\n");
        printf("Enter the choice : \n");
        
        scanf("%d", &choice);                                                   // Read user choice
        
        switch(choice)                                                          // Perform action
        {
            case 1:
                add_element(ptr);                                               // Call add function
                break;
            case 2:
                remove_element(ptr);                                            // Call remove function
                break;
            case 3:
                display_element(ptr);                                           // Call display function
                break;
            case 4:
                exit_program(ptr);                                              // Exit program
                break;
        }
        
    }while(choice !=4);                                                         // Repeat until choice is 4
    
    return 0;                                                                   // End of program
}