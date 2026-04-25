#include<stdio.h>

int modify(int num);        //function declation
int main()
{
    int num, result;
    scanf("%d", &num);      //read num
    
    result = modify(num);   //function call
    printf("After modifying, num is %d ", result);
    
    return 0;
}

int modify(int num)
{                           //function definition
    return num+5;
}