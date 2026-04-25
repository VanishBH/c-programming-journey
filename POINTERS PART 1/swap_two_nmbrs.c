#include<stdio.h>
void swap(int*, int*);
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    printf("Before swap :\n");
    printf("num1 is %d\n",num1);
    printf("num2 is %d\n",num2);
   
    
    swap(&num1, &num2);
    
    printf("After swap :\n");
    printf("num1 is %d\n",num1);
    printf("num2 is %d\n",num2);
    
    
    
    
    return 0;
}

void swap(int*num1, int*num2)
{
    int temp = *num1;
    *num1=*num2;
    *num2=temp;  
}