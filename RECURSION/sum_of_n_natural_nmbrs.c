#include<stdio.h>
int sum(int n)
{
    if(n==1)    //base case
    {
        return 1;
    }
    else
    {
        return n+sum(n-1); // recursive case
    }
}

int main()
{
    int result,n=10;
    
    
    result=sum(n);
    printf("Sum of 1st 10 numbers is %d\n",result);
    
    return 0;
}