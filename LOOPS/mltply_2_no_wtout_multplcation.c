#include <stdio.h>

int main()
{
    int i, num1, num2,sum=0;
    printf("Enter the two numbers:");
    scanf("%d %d",&num1, &num2);
    
    for(int i=0; i<num2; i++)
    {
        sum = sum+num1;
        
    }
    printf("The Result is %d \n",sum);
    
  return 0;  
}