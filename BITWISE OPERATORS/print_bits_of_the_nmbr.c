#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    
    int mask = 1;
    
    for(int i=31; i>=0; i--)
    {
        if(num & (mask<<i))  //for each itiration mask will be 1 and it left sifted to ith time
        {
            printf("1");
        }else
        {
            printf("0");
        }
    }
    
    
    return 0;
}