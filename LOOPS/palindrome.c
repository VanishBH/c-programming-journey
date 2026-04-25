#include <stdio.h>

int main()
{
    int number;
    int remain;
    int reverse;
    int temp;
    printf("Enter a number: ");
    scanf("%d",&number);
    
    reverse = 0;
    temp = number;
    
   
    for(int i=1; number!=0; i++)
    {
        
        remain = number % 10;
        reverse = (reverse * 10)+remain;
        number = number/10;
    }    
        
    if(temp == reverse)
    {
        
        printf("The Entered number is an palindrome.");
        
    }
         
        
    else
    {
    printf("The Entered number is not an palindrome.");
    }
        
    
    
   return 0; 
    
}