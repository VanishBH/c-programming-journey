#include<stdio.h>
int main()
{
   int num1;
   scanf("%d", &num1);
   unsigned int num2 = num1;
   
   printf("Signed >> 1 %d\n", num1>>1);
   printf("Signed >> 2 %d\n", num1>>2);
   
   //unsigned int num2;
   //scanf("%u", &num2);
   printf("Unsigned >> 1 %u\n", num2>>1);
   printf("Unsigned >> 2 %u\n", num2>>2);
   
    return 0;
}