#include <stdio.h>

int main ()
{
    float principle,rate,time,SI;
    
    scanf("%f %f %f", &principle,&rate,&time);
    
    SI=(principle*rate*time)/100;
    
    printf("%g",SI);
    
    return 0;
}