#include <stdio.h>

int main()
{
    int remain;
    int number;
    int reverse;
    printf("Enter a number: ");
    scanf("%d",&number);
    
    reverse = 0;
    
    if(number >=0)
    {
        
      for(int i=0; number!=0; i++)
      
     
       {
    
         remain = number % 10;
         reverse =(reverse *10)+remain;
         number = number/10;

        }
          printf("Reversed number is %d\n ",reverse);
   
    }
    
    else
    {
        printf("Please enter a positive integer");
    }
    
 return 0;   
    
}