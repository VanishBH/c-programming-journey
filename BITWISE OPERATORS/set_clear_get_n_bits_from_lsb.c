#include<stdio.h>
int main()
{
    unsigned int num;
    scanf("%x", &num);
    
    unsigned int n;
    scanf("%x", &n);
    
    int mask = (1<<n)-1;
    
    printf("After setting %d bits from lsb : %x\n",n, num | mask);
    printf("After clearing %d bits from lsb : %x\n",n, num & ~mask);
    printf("After getting %d bits from lsb : %x\n", n, num & mask);
    
    return 0;
}