#include <stdio.h>

int main()
{
    int num1,num2;
    char option;
    scanf("%d %c %d", &num1, &option, &num2);
    
    switch(option)
    {
        case '+':
        {
            int sum=num1+num2;
            printf("%d\n",sum);
        }
        break;
        
        case '-':
        {
            int sub=num1-num2;
            printf("%d\n",sub);
        }
        break;
        
        case '*':
        {
            int mul=num1*num2;
            printf("%d\n",mul);
            
        }
        break;
        
        case '/':
        {
            int div=(float)num1/num2;//type cast
            printf("%d\n",div);
            
        }
        break;
        
        default:
           printf("Invalid operation\n");
        
    }
    return 0;
    
}