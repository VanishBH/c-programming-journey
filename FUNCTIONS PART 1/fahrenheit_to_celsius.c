#include<stdio.h>
float temperature_conversion(int fah);  //function declaration
int main()
{
    int fah;
    float cels=0.0;
    
    scanf("%d",&fah);
    
    cels=temperature_conversion(fah);  //function call
    
    printf("Temp in celsius is: %g", cels);
    return 0;
}

float temperature_conversion(int fah) //function definition
{
    float cels;
    cels=((float)fah-32)*5.0/9.0;
    return cels;
}