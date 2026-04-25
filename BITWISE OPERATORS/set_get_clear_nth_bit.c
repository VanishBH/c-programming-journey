#include<stdio.h>
int main()
{
    unsigned int num;
    scanf("%X",&num);
    
    unsigned int n;
    scanf("%X",&n);
    
    int mask = 1;
    
    printf("Result after setting nth bit is : %X\n", (num |(mask<<n)));
    printf("Result after clearing nth bit is : %X\n", (num & ~ (mask<<n)));
    
    
    printf("Get bit at nth position is : ");
    if(num & (mask<<n))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
    
    return 0;
}