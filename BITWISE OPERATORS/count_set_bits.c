#include<stdio.h>
int main()
{
    unsigned int num;
    //printf("Enter the number in Hexadecimal format:");
    scanf("%x", &num);
    
    int mask = 1;
    
    int count =0;
    
    for(int i=0; i<=31; i++)
    {
        if(num & (mask<<i))
        {
            count++;
        }
    }
    
    printf("Number of set bits : %d", count);
    
    return 0;
}