#include <stdio.h>
int main()
{
    int n,m, side;
    
    scanf("%d %d", &n, &m);
    
   if (n%2 != 0|| m%2!=0 && m<n)
   {
      
  
   
   side = (n-m)/2;
   
   for(int i=0; i<side; i++) // left side
   {
       printf("$");
   }
   for(int j=0; j<m; j++)  // middle
   {
       printf("*");
   }
   for(int k=0; k<side; k++) //right
   {
       printf("$");
   }
   
   }
   
   
    return 0;
}