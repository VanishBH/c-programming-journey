#include<stdio.h>
int main()
{
     unsigned int num, result;
     scanf("%x",&num);
     
     result = ((num & 0x0F) <<4) | ((num>>4) & 0x0F);
     
     printf("After swap : %x", result);
 
 
    return 0;
}