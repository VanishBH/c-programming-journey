#include <stdio.h>
int main()
{
    int n;
    for(n=0; n<10; n++)
    {
        if(n==5)
        {
            continue;
        }
        printf("%d\n",n);
    }
    
    
    return 0;
}