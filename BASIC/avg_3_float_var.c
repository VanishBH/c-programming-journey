#include <stdio.h>

int main()
{
    
    
    float f1, f2, f3; 
    
    scanf("%f %f %f",&f1,&f2,&f3);
    float avg = (f1+f2+f3)/3;
   
    printf("%.6f",avg);
    
    return 0;
}