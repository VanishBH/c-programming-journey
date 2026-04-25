#include <stdio.h>

int main()
{
    int number;
    
    scanf("%d",&number);
    
    printf("number= %d  ",number);
    
    if(number >= 0){
        printf("is positive\n");
    }
    else {
        printf("is negative\n");
        
    }
    return 0;
}