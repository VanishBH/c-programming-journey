#include<stdio.h>
#include<string.h>

void reversestring(char str[]) // array method str is pointer
{
    int count = 0;
    for(int i=0; str[i]!='\0'; i++)
    {
        count++;
    }
    int l = count;
    //int l = strlen(str); // impliment strlen
    int j = l - 1;
    
    char temp;
    
    for(int i=0; i<l/2; i++)
    {
        temp = str[i];
        str[i]=str[j];
        str[j]=temp;
        
        j--;
    }
}
int main()
{
   char str[100];
   
   scanf("%[^\n]",str);
   
   reversestring(str);
   
   printf(" Reversed string is %s\n",str);
   
    return 0;
}