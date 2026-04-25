#include<stdio.h>
#define GET_BIT(num, pos)  (num &(1<< pos))
#define SET_BIT(num, pos)  (num|(1<< pos))
#define CLEAR_BIT(num, pos)  (num &(~(1<< pos)))
int main()
{
    int number, position;
    //printf("Enter the number : ");
    scanf("%d",&number);
    
    //printf("Enter the position : ");
    scanf("%d", &position);
    
    /*printf("GET BIT is %d\n", GET_BIT(number, position));
    printf("SET BIT is %d\n", SET_BIT(number, position));
    printf("CLEAR BIT is %d\n", CLEAR_BIT(number, position));*/
    
    
    
    return 0;
}