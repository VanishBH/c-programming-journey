#include<stdio.h>
int main()
{
   int num;
   printf("Enter a number\n");
   scanf("%d",&num);
   
   if(num>0)
   {
      
       if(num %2==0)
       printf("The number %d is positive and even.\n",num);
       else
       printf("The number %d is positive and odd.\n",num);
   }
  
       else if(num<0){
       if(num %2==0)
           printf("The number %d is negative and even.\n",num);
       else
       printf("The number %d is negative and odd.\n",num);
   
   
   }
   else{
       printf("The number is zero.\n");
   }
  
   return 0;
   }