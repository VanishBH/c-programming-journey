#include<stdio.h>
void print_arr(int arr[], int size);
//void print_array(int *ptr, int size);         // this also works and if we want to use this first we have to change the function call according to definition

int main()
{
    int arr[5]={10,20,30,40,50};
    
    print_arr(arr,5);
    
    return 0;
}

void print_arr(int arr[], int size)
{
   // printf("Array elements are:\n");
    
    for(int i=0; i<size; i++)
    {
        printf("%d ", *(arr+i)); // arr[i]  or *arr
                                              //arr++
       // printf("%p ", arr+i); //&arr
    }
}

/*void print_array(int*ptr, int size)
{
    printf("Array elements are:\n");
    
    for(int i=0; i<size; i++)
    {
        printf("%d ", *(ptr+i)); //  *arr
                                    //arr++
        //printf("%p ", ptr+i);  &ptr
    }
    
}
    
    
    
    */