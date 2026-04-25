#include<stdio.h>
#include<string.h>
void palindrome(char str[], int *flag)
{
    int count=0;
    
    for(int i=0; str[i]!='\0'; i++)
    {
        count++;
    }
    int len = count;
    *flag=0;
    
    for(int i=0,   j=len-1;   i<j;   i++, j--)
    {
        if(str[i]!= str[j])
        {
            *flag=1;
             return;
        }
        else
        {
            *flag=0;
        }
    }
}
int main()
{
    int flag;
    char str[100];
    scanf("%[^\n]",str);
    
    palindrome(str, &flag);
    
    if(flag==0)
    {
        printf("Yes, Entered string is palindrome. ");
    }
    else
    {
        printf("No, Entered string is not palindrome. ");
    }
    return 0;
}