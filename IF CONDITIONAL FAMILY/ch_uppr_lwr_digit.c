#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    
    if (ch>='A' && ch<='Z'){
        printf("The character is Upper Case\n");
    }
    else if(ch>='a' && ch<='z'){
        printf("The character is Lower Case\n");
        
    }
    else if(ch>='0' && ch<='9'){
        printf("The character is Digit\n");
        
    }
    else{
        printf("The character not an alphabet or digit\n");
    }
    
    
    
    return 0;
}