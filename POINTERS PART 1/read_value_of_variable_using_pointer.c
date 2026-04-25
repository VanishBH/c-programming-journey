#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    
    char* cptr=&ch;
    
    
    printf("Character entered is %c\n",*cptr);
    
    
    return 0;
}