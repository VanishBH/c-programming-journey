#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    
    int* ptr=&num;
    
    printf("Value is %d ",*ptr);
    
    
    return 0;
}
