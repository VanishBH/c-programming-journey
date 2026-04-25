#include<stdio.h>
#include<string.h>

char *my_strcpy(char *dest, const char *src);
int main()
{
    char src[100],dest[100];
    scanf("%[^\n]",src);
    
    printf("Copied string is %s ", my_strcpy(dest, src));
    
    
    return 0;
}
char *my_strcpy(char *dest, const char *src)
{
    char *temp = dest;
    while(*src !='\0')
    {
                              
        *dest = *src;
        dest++;                      //*dest++=*src++;  
        src++ ; 
    }
    *dest='\0';
    
    return temp;
}