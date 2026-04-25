#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *my_strstr(char m_str[], char s_str[]);
int main()
{
    char m_str[100];
    char s_str[100];
    
    scanf("%[^\n]",m_str);
    getchar();
    scanf("%[^\n]",s_str);
    
    char *ret = my_strstr(m_str, s_str);
    
    if(ret==NULL)
    {
        printf("sub string is not found\n");
        return 1;
    }
    printf("The substring is %s\n", ret);
    
    return 0;
}
char *my_strstr(char m_str[], char s_str[])
{
    int i,j;
    for(i=0; m_str[i]!='\0'; i++)
    {
        for(j=0; s_str[j]!='\0'; j++)
        {
            if(m_str[i+j]!= s_str[j])
            {
                break;
            }
        }
        if(s_str[j]=='\0')
        {
            return &m_str[i];
        }
    }
    return NULL;
}

/*

int main()
{
    char m_str[100];
    char s_str[50];
    scanf("%[^\n]",m_str);
    getchar();
    scanf("%[^\n]",s_str);
    
    char *ret=strstr(m_str, s_str); //function call
    if(ret==NULL)
    {
        printf("sub string is not found\n");
        return 1;
        
    }
    printf("The substring is %s\n",ret);
    
    return 0;
}
*/