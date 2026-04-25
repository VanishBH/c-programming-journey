#include<stdio.h>
int main()
{
    int size;                       //declare a size of array
    printf("Enter array size: ");
    scanf("%d",&size);              //read the size of an array from user
    
    int i,j;
    int arr[size];                  //declatre the array with size
   
    
    printf("Enter array elements: ");
    for(int i=0; i<size; i++)           //loop for reading array elements from user
    {
        scanf("%d", &arr[i]);           //reading array elements from user using loop ,(for every each itiration one one value(element))
        
    }
    
    
    printf("Elements before reversing:\n");
    for(int i=0; i<size; i++)                   //loop for printing the array elements before reverse
    {
         printf("%d ",arr[i]);                 //printing the array of elements using loop;(for every itiration one one value(element))
    }
   
    
    int temp;                               //declaring temporary value to store temporary values
    for(int i=0; i<size/2; i++)             //loop for calculating reverse number
    {
        temp=arr[i];                        //temp storing value of arr[i] ; ( arr[0 (0th index)]=10(element),storing to=> temp=10)
        arr[i]=arr[size-i-1];               //arr[i] is storing the value of arr[size-i-1]; (arr[5-0-1](4th index)=50(element),storing to=> arr[0](0th index)=50)
        arr[size-i-1]=temp;                 //arr[size-i-1] is storing the value of temp;  (temp=10, storing to => arr[5-0-1](4th index)=10)
    }                                       /*same process done for every itiration here i= index value */ 
    
    
    
    printf("\nElements after reversing:\n");
    for(int i=0; i<size; i++)               //loop for printing the elements after reversing
    {
    
    printf("%d ",arr[i]);
    }
    return 0;                               //program ends;
}
