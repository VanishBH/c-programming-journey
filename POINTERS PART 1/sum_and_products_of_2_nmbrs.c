#include<stdio.h>
void sum_prod(int *num1, int *num2,  int *sum, int *prod);

int main()
{
    int num1, num2, sum=0, prod=0;
    scanf("%d %d", &num1, &num2);
    
    sum_prod(&num1, &num2, &sum, &prod); //function call
    
    printf("sum= %d\nproduct= %d", sum, prod);
    
    
    return 0;
}

void sum_prod(int *num1, int *num2, int *sum, int *prod)
{
    *sum = *num1 + *num2;
    *prod = *num1 * *num2;
}
