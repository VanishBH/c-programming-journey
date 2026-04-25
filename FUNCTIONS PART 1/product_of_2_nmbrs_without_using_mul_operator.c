#include<stdio.h>
int product(int num1, int num2);

int main()
{
    int num1,num2,prod=0;
    scanf("%d %d",&num1, &num2);
    
    prod=product(num1,num2);//function call
    
    printf("Product of two number is %d ",prod);
    
    return 0;
}

//function definition
int product(int num1, int num2)
{
   int sum=0;
   for(int i=1; i<=num2; i++)
{
    sum=sum+num1;
}
return sum;
}
