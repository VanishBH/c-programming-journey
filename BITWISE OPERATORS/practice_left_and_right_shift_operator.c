#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    
    int n;
    printf("Enter the number of shifts to perform:");
    scanf("%d",&n);
    
    int mask = 1;
    
    printf("After shifting to the right, the output is : %d\n", num >>n);
    printf("After shifting to the left, the output is : %d", num << n);
    
    return 0;
}