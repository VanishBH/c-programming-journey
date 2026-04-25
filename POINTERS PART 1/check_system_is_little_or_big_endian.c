#include<stdio.h>
int main()
{
    int num = 0x12345678;
    
    char* cptr=(char*)&num;
    //type cassting - As storing int address in char in char pointer
    
    if(*cptr == 0x78)
    {
        printf("Ours is a little endian ");
    }
    else
    
    {
        printf("Ours is a big endian ");
    }
    return 0;
}