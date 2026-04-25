#include<stdio.h>

#define PRODUCT(a, b) ((a) * (b))

int main()
{
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    
    printf("Product of %d and %d is %d\n",n1, n2, PRODUCT(n1, n2));
    
    double a1, a2;
    scanf("%lf %lf",&a1, &a2);
    
    printf("Product of %g and %g is %g\n",a1, a2, PRODUCT(a1, a2));
    
    
    return 0;
}