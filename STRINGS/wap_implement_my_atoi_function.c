#include <stdio.h>                                                              // include standard input output library for printf and scanf

int my_atoi(const char str[]);                                                  // function declaration (prototype) telling compiler function exists

int main()                                                                      // main function starting point of program execution
{
    int result;                                                                 // variable to store final integer result
    char str[100];                                                              // character array to store input string (max 100 characters)
    
    printf("Enter a numeric string : ");                                        // print message asking user to enter string
    scanf("%s", str);                                                           // read string input from user and store inside str array
    
    result = my_atoi(str);                                                      // call function and store returned integer value into result variable
  
    
    printf("String to integer is %d\n", result);                                // print converted integer value
    return 0;                                                                   // return 0 means program executed successfully
}

int my_atoi(const char str[])                                                   // function definition to convert string into integer
{
    int num=0;                                                                  // variable to store final number (initialized to 0)
    int temp;                                                                   // temporary variable to store digit value
    int sign=1;                                                                 // variable to store sign (default positive)
    int i=0;       //initialize here only once dont do again initialize in loop // index variable to traverse string characters
    
   
        if((str[i]=='+' && str[i+1]=='-') || (str[i]=='-' && str[i+1]=='+'))    // check invalid sign combination like +- or -+
        {
            return 0;                                                           // return 0 if invalid starting sign pattern found
        }
        if((str[i]<'0' || str[i]>'9') && (str[i]!='+' && str[i]!='-'))          // check if first character is not digit and not sign
        {
            return 0;                                                           // return 0 if invalid starting character
        }
       
      
            if(str[i]=='+')                                                     // check if first character is plus sign
            {
                sign=1;                                                         // keep sign positive
                i++;                                                            // move index to next character
            }
            else if(str[i]=='-')                                                // check if first character is minus sign
            {
    
                sign=-1;                                                        // make sign negative
                i++;                                                            // move index to next character
            }
            
            for(; str[i]!='\0'; i++)                                            // loop through characters until null character (end of string)
            {
                if(str[i]<'0' || str[i]>'9')                                    // check if current character is not a digit
                {
                    break;                                                      // stop conversion when non-digit appears
                }
                temp = str[i] - '0';                                            // convert character digit into integer value
                num = (num * 10) + temp;                                        // build number by shifting left and adding new digit
            }
    
    return sign  * num;                                                         // return final number after applying sign
}
