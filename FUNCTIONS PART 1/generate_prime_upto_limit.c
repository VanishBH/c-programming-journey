#include <stdio.h>

//function to check if a number is prime
int is_prime(int num) 
{
    if(num<=1)
    {
        return 0;
    }
    
    for(int i=2; i*i<=num; i++) // num/2 times or squareroot (num)
    {
        if(num%i==0)
        {
            return 0; // not a prime
        }
    }
    return 1; //prime
        
}


//function to generate prime series upto limit
void generate_prime(int limit) 
{
  
    for(int i=2; i<=limit; i++)
    {
        if(is_prime(i)) //function call
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}

int main()
{
    int limit;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    if (limit > 1)
    {
        generate_prime(limit);
    }
    else
    {
        printf("Invalid input\n");
    }
    
    return 0;
}