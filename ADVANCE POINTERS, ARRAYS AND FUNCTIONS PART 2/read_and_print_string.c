#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str;
    
    str = malloc(15 * sizeof(char));
    
    if(str==NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    
    scanf("%[^\n]",str);
    
    printf("%s",str);
    
    free(str);
    
    
    return 0;
}