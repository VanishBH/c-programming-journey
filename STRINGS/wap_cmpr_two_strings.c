#include<stdio.h>
#include<string.h>
int compstr(const char *s1, const char *s2)
{
    while(*s1 !='\0' && *s2 !='\0')
    {
        if(*s1 != *s2)
        {
            return 1; //not equal
        }
        
        s1++;  // incree pointers
        s2++;
    }
    
    if(*s1 == '\0' && *s2 == '\0')
    {
        return 0; // string both reached null char
    }
    else
    {
        return 1;
    }
}
int main()
{
    char str1[100], str2[100];
    
    scanf("%[^\n]",str1);
    getchar();                // it reads the new newline char
    scanf("%[^\n]",str2);
    
    int ret = compstr(str1, str2); //fun call
    
    if(ret==0)
    {
        printf("Entered Strings are equal");
    }
    else
    {
        printf("Entered Strings are not equal");
    }
    
    
    return 0;
}