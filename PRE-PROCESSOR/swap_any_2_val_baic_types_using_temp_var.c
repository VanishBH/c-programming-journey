#include<stdio.h>
#define SWAP(a,b) {\
    int temp = (a);\
    (a) = (b);\
    (b) = temp;\
}
//dont give extra space or extra Enter tab while declaring Macro
/*#define SWAP(a,b) do{\
    int temp = (a);\
    (a) = (b);\
    (b) = temp;\
}while   // better way
*/
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    SWAP(n1,n2);
    
    printf("After swapping :\n");
    printf("num1 is %d\n",n1);
    printf("num2 is %d",n2);
    
    return 0;
}