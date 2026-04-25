#include <stdio.h>
int main()
{
    int i;
    int n;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
       if(i==5)
       {
        break;
       }
        printf("%d ", i);
    }
    return 0;
}