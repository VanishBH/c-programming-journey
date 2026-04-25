#include<stdio.h>
int sum_sequence(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n + sum_sequence(n-1);
    }

       
}
int main()
{
    int n;
    scanf("%d",&n);
    
    int result = sum_sequence(n);
    printf("Sum is %d ",result);
    
    return 0;
}