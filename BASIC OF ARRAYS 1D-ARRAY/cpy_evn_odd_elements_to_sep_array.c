#include<stdio.h>
int main()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);
    
    int arr[size];
    int even_arr[size];
    int odd_arr[size];
    
    
    int even_count=0;
    int odd_count=0;
    
    printf("Enter array elements: ");
    
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        
        
        if(arr[i]%2==0)
        {
          even_arr[even_count]=arr[i];
          even_count++;
        }
          
          else
          {
            odd_arr[odd_count]=arr[i];
            odd_count++;
          }
        
    }
    printf("Odd array elements:");
    
    for(int i=0; i<odd_count;  i++)    
    {
           printf("%d ",odd_arr[i]);
       
    }
    printf("\nEven array elements:");
    
    for(int i=0; i<even_count; i++)
    {
        printf("%d ",even_arr[i]);
    }
    return 0;
}