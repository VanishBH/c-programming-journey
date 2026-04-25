#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    
    int arr[size];
    
    for(int i=0; i<size; i++)
      scanf("%d", &arr[i]);
      
      int sum=0;
      
     for(int j=0; j<size; j++)
        sum = sum + arr[j];
        printf("sum:%d\n", sum);
        
        
      float average=(float)sum/size;
      printf("average : %.2f ", average);
      

    return 0;
}