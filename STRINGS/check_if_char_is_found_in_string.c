#include<stdio.h>                    //gives printf(), scanf() functions
#include<string.h>                  //string related library
#include<stdlib.h>                  //gives NULL definition
char *my_strchr(char *s, const char c);

int main()
{
    char str[100],ch;
    scanf("%[^\n]",str);//reading string
    getchar();
    scanf("%c",&ch); // reacing char
    
    
    char *ret = my_strchr(str, ch);
    if(ret==NULL)
    {
        printf("Character is not found in the string\n");
        return 1;
    }
    printf("Search result is %s\n", ret);   //print string starting from found character

    
    return 0;
}
char *my_strchr(char *str, const char c)
{
    
    // loop until character found or loop reaching null
    while(*str!= c && *str!='\0')
    {
        str++;          //move pointer to next character
        
    }
    if(*str==c)         //check if character found
    {
        return str;     //return address where character found
    }
    else                //if reached end of the string
    {
        return NULL;    //return null means not found
    }
}