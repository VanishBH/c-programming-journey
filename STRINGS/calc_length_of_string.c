#include<stdio.h>
#include<string.h>

size_t my_strlen(const char*str);

int main()
{
    char str[100];
    scanf("%[^\n]",str); // selective scanf
    
    size_t len = my_strlen(str);
    printf("String length is %lu\n",len);
    
    return 0;
}
size_t my_strlen(const char*s)
{
    int count = 0;
    
    while(*s!='\0')
    {
        count++;
        s++;
    }
    return count;
}