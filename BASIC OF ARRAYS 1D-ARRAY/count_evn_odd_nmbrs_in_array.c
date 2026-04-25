#include<stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    
    int arr[size];
    int even_count=0;
    int odd_count=0;
    
    printf("Enter array elements: ");
    
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        
        if(arr[i]%2==0)
        {
           
            even_count=even_count+1; // it will store the count of even numbers (if condition gets true it will increment by 1); 
        }
        
        else
        {
           
            odd_count=odd_count+1; // it will store the count of odd numbers  (if condition gets true it will increment by 1); 
            
        }
  
    }
     printf("even count: %d\n",even_count); 
     printf("Odd count: %d\n", odd_count);
    
    
    
    
    
    return 0;
}