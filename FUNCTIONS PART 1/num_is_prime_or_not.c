#include<stdio.h>
//function declaration  //function definition
int prime(int num)  
{
    int i;
    
    if(num<=1)
    {
        return 0; //not a prime
        
    }
    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
            return 0; //not prime
    }
    return 1; //prime
}

int main()
{
    int num;
    scanf("%d",&num);
    
    if(prime(num))  //function call
    {
    printf("%d is a prime number",num);
    }
    
    else{
    printf("%d is not a prime number",num);
    }
    return 0;
}
