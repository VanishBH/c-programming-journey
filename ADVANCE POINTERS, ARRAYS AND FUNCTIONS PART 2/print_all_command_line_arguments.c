#include<stdio.h>
int main(int argc, char *argv[])
{
    int i = 0;
    printf("No of argument(s): %d\n", argc);
    
    printf("List of argument(s) are \n");
    
    /* 
    for(i=0; i<argc; i++)
    {
        printf("arg %d is %s\n",i, argv[i]);
    }
    */
    
    while(argv[i] =NULL)
    {
        printf("arg %d is %s\n", i, argv[i]);
        i++;
    }
    
    
    return 0;
}