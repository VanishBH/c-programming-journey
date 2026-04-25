#include <stdio.h>

int main()
{
    int num;
    printf("Eenter a number:");
    scanf("%d", &num);
    
    if(num < 0){
        printf("%d The number is negative\n", num);
    }
    else if(num > 0){
        printf("%d The number is positive\n", num);
    }
    else{
        printf("%d The number is zero\n", num);
    }
    return 0;
}