#include<stdio.h>
#include<string.h>
void reverse_each_world(char *str);
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    
    reverse_each_world(str);
    return 0;
}
void reverse_each_world(char *str)
{
    int i,start,end;
    int count = 0;
    for( i=0; str[i]!='\0'; i++)
    {
        count++;
    }
    int len = count;
    printf("Reversed string: ");
    for(i = len - 1; i>=0; i--)
    {
        if(str[i]==' ')
        {
            start = i+1;
            end = start;
        
            while(str[end]!=' ' && str[end]!='\0')
            {
                printf("%c", str[end]);
                end++;
            }
            printf(" ");
        }
    }
    for(i=0; str[i]!=' ' && str[i]!='\0'; i++)
    {
        printf("%c", str[i]);
    }
}