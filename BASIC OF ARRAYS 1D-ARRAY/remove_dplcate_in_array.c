#include<stdio.h>
int main()
{
    int i;
    int size;
    
    scanf("%d",&size);
    
    int original_arr[size];
    int uniq_arr[size];
    
    int uniq_count=0;           //index for uniq array
    
    for(int i=0; i<size; i++)
    {
        scanf("%d", &original_arr[i]);
    }
    
    
    //Removing duplicates
    
    for(int i=0; i<size; i++)  //loop to pick each element from original_arr
    {
        
        int flag=0;
        
        for(int j=0; j<uniq_count; j++)               //loop to checks if current element is already exits in uniq_arr
        {
            if(original_arr[i]==uniq_arr[j])         //compare current element with elements in uniq arr
            {
                flag=1;                             //duplicate found
                break;                              //stop checking further
            }
        }
        if(flag==0)                             //if element is not found in uniq array
        {
            uniq_arr[uniq_count]=original_arr[i];   //store uniq elements
            uniq_count++;                           //move to next position
        }
        
    }
    printf("Unique array elements: ");
    for(int i=0; i<uniq_count; i++)                 //loop to print uniq elements
    {
        printf("%d ",uniq_arr[i]);                  //prints each uniq elements
        
    }
    
    
    return 0;
}