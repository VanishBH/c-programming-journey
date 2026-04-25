#include <stdio.h>
int main()
{
    int i;
    int n,count = 1;
    scanf("%d", &n);
    
    for(int i=1;i<=50;i++) // if we give n value as 50 and it will print the odd series 1 to 99
    {
        printf("%d ",count);
        count = count+2;
    }
    
  return 0;
}