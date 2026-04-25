#include<stdio.h>

//function declaration: function to check whether the number is even or odd;

int even_odd(int num)                               //Function definition: it receives an integer number gives returns an integer value;
{
   
//check if the number is divisible by 2
   if(num%2==0)                                     //if the reminder is 0 then it is even number
   {
       return 1;                                   //return 1 to indicate TRUE (num is even)
   }
   else                                           //if the number is not 0 then it is odd number
   {
       return 0;                                 //return 0 to indicate FALSE (num is odd)
   }
   
    
}
int main()
{
    
    int num;                                //declare the integer variable to store the user input
    
   
    scanf("%d", &num);                    //read the variable from the user
    
    int result=even_odd(num);            //function call: call the even_odd function and store the return value in result
    
    
    //checks the value returned by the function
    if(result==1)                                   //if function returned 1 (TRUE)
    {
        printf("TRUE");
    }
    
    else                                          //if function returned 0 (FALSE)
    {
        printf("FALSE");
    }
    
    
    return 0;
}