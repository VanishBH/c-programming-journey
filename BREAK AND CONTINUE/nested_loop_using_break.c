#include<stdio.h>
int main()
{
   int i,j;
   
   for(i=0; i<10; i++)
   {
       for(j=0; j<10; j++)
       {
           if(i==5)
           {
              break;
           }
           
        printf("%d ", i);
        break;
       }
       
       if(i==5)
       {
           break;
       }
       
   }
    
    
    printf("\n");  
    return 0;
}