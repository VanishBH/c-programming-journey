#include<stdio.h>                                                               //include standard input output library to use putchar()
void print(char *s)                                                             //create a function named print that takes a pointer to char(string address)

{                                                                               //start of function block
    
    while(*s != '\0')                                                           //run a loop till the character is null
    {                                                                           //start of while loop block
        putchar(*s);                                                            //print the current character stored at the address ponited by s
        s++;                                                                    //move the pointer s to the next character in the string
    }                                                                           //End of the while loop block
    
}                                                                               //End of print function 

int main()                                                                      //main function where function execution starts
{                                                                               //start of the main function block
    char *str = "Hello world";                                                    //create a pointer variable str and store address of the string "Hello abc"
    print(str);                                                                 //call print function and pass the string address to it
    
    return 0;                                                                   //end of the program
    
}   
/*for(int i=0; str[i]!='\0'; i++)
  {
    putchar(str[i]);
  }*/                                                                            //End of the main funnction block