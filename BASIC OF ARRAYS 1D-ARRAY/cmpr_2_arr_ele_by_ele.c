#include<stdio.h>
int main()
{
    int i;
    int size1;
    printf("Enter the array1 size: ");
    scanf("%d", &size1);
    int arr1[size1];
    
    int size2;
    printf("Enter the array2 size: ");
    scanf("%d", &size2);
    int arr2[size2];
    
    if(size1 != size2)  //if size is not equal array cannot be equal
    {
       return 0;
    }
   
    printf("Enter the array1 elements : ");
    for(int i=0; i<size1; i++)
    {
    scanf("%d", &arr1[i]);                      //read elements of first array
    }
    
    printf("Enter the array2 elements : ");
    for(int i=0; i<size2; i++)
    scanf("%d", &arr2[i]);                      //read elements of second array
    
    
    
    //this array keeps tracking which element of array2 is already matched
    int used[size2];
    for(int i=0; i<size2; i++)                  //initially no elements of array2 is used
    {
        used[i]=0;                              //0 means not used
    }
    
    
    int flag1=0;                                //flag1=0 array is equal
                                               //flag1=1 array is not equal
    for(int i=0; i<size1; i++)
    {
        int flag=0;                          //flag for current  arr1 element
        
        for(int j=0; j<size2; j++)          //try to find the matching unused element in array2
        {
            
            /*checking
            //1. values are same
            //2. array 2 elements are already used*/
            if(arr1[i]==arr2[j] && used[j]==0)
            {
                used[j]=1;                      //marks this array 2 elements is used
                flag=1;                         //match found 
                break;                          //stop checking
            }
        }
        //if arr1 element didnot find any match
        if(flag==0)
        {
            flag1 = 1;          //arrays are not equal
            break;              //stops checking
        }
    }
    
    //final result based on flag
    if(flag1==0)
    {
        printf("Array elements are equal");
    }
    else
    {
        printf("Array elements are not equal");
    }
    
    
    return 0;
}