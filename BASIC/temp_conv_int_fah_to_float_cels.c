#include <stdio.h>

int main ()
{
    int fah;
    float cels=0.0;
    
    scanf("%d", &fah);
    
    cels=((float)fah-32)*5.0/9.0;
    
    printf("temp in celscius is: %f", cels);
    
    return 0;
    
}