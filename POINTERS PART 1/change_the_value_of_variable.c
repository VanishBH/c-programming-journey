#include<stdio.h>
int main()
{
    float age;
    scanf("%f",&age);
    
    //printf("Age: %h\n",age);
    
    float* fptr=&age;
    
    *fptr= *fptr +20;
    
    printf("Age after increasing by 20 is %g\n", *fptr);
    
    return 0;
}