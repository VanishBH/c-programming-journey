#include<stdio.h>
#include<string.h>
void reverse_char(char str[]);
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    
    reverse_char(str);
    
    return 0;
}
void reverse_char(char str[])
{
    int i, start=0;
    int end;
    int count=0;
    
    for(i=0; str[i]!='\0'; i++)
    {
        count++;
    }
    int len = count;
    
    printf("Reversed string: ");
    for(i=0; i<=len; i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            end = i-1;
            
            for(int j=end; j>=start; j--)
            {
                printf("%c",str[j]);
            }
            
            if(str[i]==' ')
            {
                printf(" ");
            }
            start = i+1;
        }
    }
}