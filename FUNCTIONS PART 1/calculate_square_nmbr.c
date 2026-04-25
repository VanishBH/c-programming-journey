#include<stdio.h>

//function to calculate square of a number
int square(int num)                         //function definition, takes int 'num' as input
{
  
  return num*num;                          //multiply num by itself and return the result
}
int main()
{
    int num;                            //declare variable num
    scanf("%d",&num);                   //read the integer from user and store it in num
    int result=square(num);             //call function 'square' with 'num' and store return value in result
    
    printf("square is %d",result);
    
    
    return 0;
}