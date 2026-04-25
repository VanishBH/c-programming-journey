#include<stdio.h>
#include<string.h>

void my_strcmp(const char str1[], const char str2[],int n);
int main()
{
    char str1[100];
    char str2[100];
    int n;
    
    scanf("%s",str1);
    scanf("%s",str2);
    
    scanf("%d", &n);
    
    my_strcmp(str1, str2, n);
    
    
    return 0;
}
void my_strcmp(const char str1[], const char str2[],int n)
{
   
    for(int i=0; i<n; i++)                  //compare one by one character upto n;
    {
        if(str1[i] != str2[i])             // if characters are different decides which string is smaller
        {
            if(str1[i]<str2[i])      // if mismatch found in above comnmdition it checks ASCII value for comparison
            {
                printf("str1 is less than str2");
            }
            else
            {
                printf("str2 is less than str1");
                
            }
            return;                   //stops after each mismatch like strcmp()
        }
        if(str1[i] == '\0' && str2[i] =='\0')   // if any strings end before n stops comparing
        {
             printf("str1 is equal to str2"); 
             return;
        }
        if(str1[i]=='\0')
        {
              printf("str1 is less than str2");
              return;
        }
        if(str2[i]=='\0')
        {
             printf("str2 is less than str1");
             return;
        }
        
    }
    printf("str1 is equal to str2");    // if no difference is found then both strings are equal;
    
    
}