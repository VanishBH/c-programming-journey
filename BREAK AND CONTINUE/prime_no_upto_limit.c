#include<stdio.h>
int main()
{
    
    int num;
    int i;
    int flag;
    int limit;
    
    printf("Enter a limit: ");
    scanf("%d", &limit);
    
    for(num=2; num<=limit; num++)
    {
        
        flag=0;
        
        
        for(i=2; i<num;i++)
        
        {
          if(num%i==0)
          
          
            {
              
              flag=1;
              break;
            }
        }
        
    
        if(flag==0)
        
        { 
            printf("%d ",num);
        }
    }
    
    
    
    return 0;
}