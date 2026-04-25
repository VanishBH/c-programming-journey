#include <stdio.h>

int main()
{
    int i,n,count=1;
    printf("Enter the number:");
    
    scanf("%d",&n);

    
    if(n>0)
    {
        for(int i=1; i<=n; i++)
        {
            printf("%d\n",count); //print series.
            count = count * 2; //logic to print series
        }
    }
    else{
        printf("Error : Number should be an positive number.\n");
    }
    return 0;
}