#include<stdio.h>
//Recursive function to find sum of digits.
int sum(int n)
{
    if(n==0)                                               //Base condition
    {
        return 0;
    }
    else
    {
        return (n%10) + sum(n/10);                      // last digit + sum of the remaining digit
    }
    
}
int main()
{
    int n, result;
    printf("Enter the number:");
    scanf("%d",&n);
    
    result = sum(n);                                    //function call
    
    printf("Sum of the digits is %d ", result);
    
    
    return 0;
}