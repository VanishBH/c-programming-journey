#include<stdio.h>
#include<string.h>

char *my_strcat(char *dest, char *src);

int main()
{
    char src[100], dest[200];
    
    scanf("%s",dest);
    scanf("%s",src);
    
    my_strcat(dest,src);
  
    printf("concatenate string is %s",dest);
    return 0;
}

char *my_strcat(char *dest,  char *src)
{
    
    char *temp = dest;
    while(*dest !='\0')
    {
        dest++;
    }
    while(*src !='\0')
    {
        *dest =*src;
        dest++;
        src++;
    }
    *dest ='\0';
    return temp;
}