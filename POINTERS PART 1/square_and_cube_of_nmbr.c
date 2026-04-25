#include<stdio.h>
void sq_cube(int *x, int *sq, int *cube)
{
    *sq = *x * *x;
    *cube = *x * *x * *x;
    
}
int main()
{
    int x, sq=0, cube=0;
    scanf("%d", &x);
    
    sq_cube(&x, &sq, &cube);
    
    printf("Square is %d\nCube is %d\n", sq, cube);
    
    return 0;
}