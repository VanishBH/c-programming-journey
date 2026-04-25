#include<stdio.h>
float average(float num1, float num2, float num3);

int main()
{
    float num1,num2,num3,result=0;
    scanf("%f %f %f",&num1, &num2, &num3);
    
    result=average(num1, num2, num3);
    
    printf("Average is %g",result);
    
    return 0;
}

float average(float num1, float num2, float num3)
{
return ((num1+num2+num3)/3);
}