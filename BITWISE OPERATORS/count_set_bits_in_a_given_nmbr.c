#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    
    
    int count=0;
    int mask = 1;
    
    for(int i=0; i<=31; i++)
    {
        if(num & (mask<<i))
        {
            count++;
        }
    }
    printf("The count of set bits is %d", count);
    
    return 0;
}