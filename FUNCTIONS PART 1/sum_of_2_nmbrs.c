#include<stdio.h>
int add(int num1, int num2); // function declaration



int main()
{
    int num1, num2,result=0;
    scanf("%d %d", &num1, &num2);
    
    result=add(num1, num2);//function call;
    
    printf("Sum of two numbers is %d ",result);
    return 0;
}

//function definition

int add(int num1, int num2)
{
int sum=0;
sum=num1+num2;   /* return num1 +num2  dont need sum*/
return sum;
}