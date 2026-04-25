#include<stdio.h>
int power(int n, int m)
{
    if(m==0) //Base condition   //if power becomes 0 then return 1
    {
        return 1;
    }
    else
    {
        return n * power(n, m-1); //Recurnive call multiply n with power(n, m-1)
    }
    
    
}
int main()
{
    int n, m, result;
    printf("Enter n and m : ");
    scanf("%d %d", &n, &m);
    
    result = power(n,m);  //function call
    printf("%d to the power of %d is %d ", n, m, result);
    
    
    return 0;
}