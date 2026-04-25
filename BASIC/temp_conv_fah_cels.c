#include <stdio.h>
int main ()
{
    double  fah;
    double cels;

    
    scanf("%lf", &fah);
    
    cels = (fah - 32) * 5 / 9.0;
    
    printf("(numbers)---\n%f",cels);
    
    return 0;
}