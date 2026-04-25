#include<stdio.h>
int main()
{
    int i;
    int n;
    int count=1;
    printf("Enter the number:\n");
    scanf("%d", &n);
    
      
    for(int i=0; i<100; i++)
    {
        if((count % 3)==0 && (count % 5)==0)
        {
            printf("FizzBuzz ");
        }
    else if((count % 3)==0)
        {
           printf("Fizz ");
        }
    else if((count % 5)==0)
    {
        printf("Buzz ");
    }
    else
    {
        printf("%d ", count);
    }
        count = count+1;
    }
    
    return 0;
}