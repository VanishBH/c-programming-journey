#include<stdio.h>
void print_num(int n)
{
    static int s=0;
    if(s<=n)
    {
        printf("%d ",s);
         s=s + 1;
       
        print_num(n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    print_num(n);
    
    return 0;
}