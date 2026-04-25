#include<stdio.h>
int main()
{
    
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int arr[size];
    int n;
    int flag=0;
    
    printf("Enter array elements: ");
    
    for(int i=0; i<size; i++)
    scanf("%d",&arr[i]);
    
    printf("Enter the elements to search:");
    scanf("%d",&n);
    for(int j=0; j<size; j++)
    {
       
        
        
        if(arr[j]==n)
        {
            
            flag=1;
            break;
        
        }
        
        
    }
    if(flag==1)
    {
        printf("Element Found");
    }
    else{
        printf("Not found");
    }
    
    return 0;
}