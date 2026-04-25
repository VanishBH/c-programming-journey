#include <stdio.h>

int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    
    if(num>=50 && num <=100){
        printf("%d is in range \n", num);
    }
    else{
        printf("%d is not in range \n", num);
    }
  return 0;  
}