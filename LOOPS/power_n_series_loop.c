#include <stdio.h>

int main()
{
    int i, base, power, count = 1;
    printf("Enter the base value:\n");
    scanf("%d",&base);
    
    printf("Enter the power value:\n");
    scanf("%d", &power);
    
    if(power>0)
    {
        for(int i=0; i<=power; i++)
        {
          printf("%d ",count);
          count = (count * base);
            
        }
    }
    return 0;
}