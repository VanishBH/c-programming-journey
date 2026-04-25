#include <stdio.h>

int main()
{
    char option;
    printf("Enter direction:");
    scanf("%c", &option);
    
    switch(option){
    
    case 'N':
    case 'n':
    printf("North\n");
    break;
    
    
    case 'S':
    case 's':
    printf("South");
    break;
    
    case 'E':
    case 'e':
    printf("East");
    break;
    
    case 'W':
    case 'w':
    printf("West");
    break;
    
    default:
    printf("Invalid input");
    
    
   
    }
    
    return 0;
}
    