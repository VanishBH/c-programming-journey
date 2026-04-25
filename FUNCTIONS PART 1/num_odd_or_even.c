#include<stdio.h>
int odd_even(int num);          //function declaration

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int result= odd_even(num);      //function call
    
    if(result==1)                   //return 1 (even)
    printf("%d is even ",num);
    
    else                            //return 0 (odd)
    printf("%d is odd ", num);
    
    return 0;
}

int odd_even(int num)       //function definition
{
    
    if(num%2==0)
    {
        return 1;           //number is evn
    }
    else
    {
        return 0;           //number is odd
    }
    
    
}