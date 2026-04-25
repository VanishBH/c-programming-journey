#include<stdio.h>
int main()
{
    int num;
    scanf("%i",&num);   //automatically detects base, for eg. if the num is hexadecimal or decimal or octal.
    
    printf("%d\n", ~num);
    printf("%X",~num);
     
   
    return 0;
}