#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int sum = 0;
    if(argc <= 1)
    {
        printf("Please pass correct no. of arguments\n");
        return 0;
    }
    
    for(int i=1; i<argc; i++)
    {
        sum = sum + atoi(argv[i]);
    }
    float average;
    printf("Average is %g\n",(float)sum/(argc-1));
    
    return 0;
}