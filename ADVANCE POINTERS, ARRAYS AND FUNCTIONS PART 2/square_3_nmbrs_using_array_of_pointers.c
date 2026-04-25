#include<stdio.h>
#include<stdlib.h>
void square(int *ptr[]);
int main()
{
    
    int a = 10, b = 20, c = 30;
    
    int *arr[3];
    
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    
    square(arr);
    
    //printf("Square of the numbers are: \n");
    
    printf("%d %d %d", *arr[0], *arr[1], *arr[2]);
    
    /*printf("a = %d\n", *arr[0]);
    printf("b = %d\n", *arr[1]);
    printf("c = %d\n", *arr[2]);*/
    
    return 0;
}
void square(int *ptr[])
{
    for(int i=0; i<3; i++)
    {
        *ptr[i] = ((*ptr[i]) * (*ptr[i]));   //*(*(ptr + i)) = (*(*(ptr + i))) * (*(*(ptr + i)));
    }
    
}