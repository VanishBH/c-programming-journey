#include <stdio.h>                                                              // include standard input output header file for printf and scanf

void itoa(int num, char str[]);                                                 // function declaration (prototype) of itoa function

int main()                                                                      // main function starting point of program
{
    int num;                                                                    // declare integer variable to store number from user
    char str[100];                                                              // declare character array to store converted string
    
    printf("Enter the number:");                                                // ask user to enter a number
    scanf("%d", &num);                                                          // read integer input from user and store in num
    
    itoa(num, str);                                                             // call itoa function and send number and string array
    
    printf("Integer to string is %s", str);                                     // print converted string
    
    return 0;                                                                   // return 0 means program executed successfully
}

void itoa(int num, char str[])                                                  // function definition starts (convert integer to string)
{
    int sign=1;                                                                 // assume number is positive initially
    int i=0;                                                                    // index variable to store characters in string
                                                                                // initialize only once here
    
    if(num==0)                                                                  // check if number is zero
    {
       str[i++]='0';                                                            // store character '0' in string and increase index
       str[i]='\0';                                                             // add null character to end string
       return;                                                                  // exit function because work is finished
    }
    
    if(num < 0)                                                                 // check if number is negative
    {
        sign = -1;                                                              // store negative sign indicator
        num = -num;                                                             // make number positive for easy calculation
    }
    
    for(; num!=0; i++)                                                          // loop runs until number becomes zero
    {
       int remain=num%10;                                                       // get last digit using modulus operator
       str[i]=remain + '0';                                                     // convert digit to character and store in string
       num = num/10;                                                            // remove last digit from number
    }
    
    if(sign== -1)                                                               // check if original number was negative
    {
        str[i++]='-';                                                           // add minus sign and increase index
    }
    
    str[i]='\0';                                                                // add null character to end string
    
    for(int start = 0,  end = i-1; start<end; start++, end--)                   // reverse string loop
    {
        char temp=str[start];                                                   // store starting character temporarily
        str[start]=str[end];                                                    // copy ending character to starting position
        str[end] = temp;                                                        // put temporary character at ending position
    }
}
