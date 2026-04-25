#include<stdio.h>
struct nibble
{
    unsigned char lower:4;
    unsigned char upper:4;
};
int main()
{
    unsigned int num;
    struct nibble s1;
    
    //printf("Enter the hexa-decimal value: ");
    scanf("%x", &num);
    
    //s1 = *(struct nibble*)&num; 
     
     s1.lower = num & 0x0F ; //last 4 bits
     s1.upper = (num>>4) & 0x0F;  //first 4 bits
    
    unsigned char temp;
    
    temp = s1.lower;
    s1.lower = s1. upper;
    s1. upper = temp;
    
   printf("After swap nibble : %x%x",s1.upper, s1.lower);
    
    
    
    return 0;
    
}