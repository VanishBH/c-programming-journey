
#include <stdio.h>                                                              // include standard input and output library for printf and scanf

void fun(int *arr1, int size, int *arr2, int *new_size)                         // function to remove duplicates using pointers
{
    *new_size = 0;                                                              // set unique element count to 0 at start

    for(int i = 0; i < size; i++)                                               // loop through each element of original array
    {
        int flag = 0;                                                           // assume current element is not duplicate (0 means not found)

        for(int j = 0; j < *new_size; j++)                                      // loop through already stored unique elements
        {
            if(arr1[i] == arr2[j])                                              // check if current element already exists in unique array
            {
                flag = 1;                                                       // mark as duplicate (found already)
                break;                                                          // stop inner loop because match is found
            }
        }

        if(flag == 0)                                                           // if element was not found in unique array
        {
            arr2[*new_size] = arr1[i];                                          // copy current element to unique array
            (*new_size)++;                                                      // increase unique element count using pointer
        }
    }
}

int main()                                                                      // starting point of program
{
    int size;                                                                   // variable to store number of elements

    printf("Enter the size: ");                                                 // ask user to enter size
    scanf("%d", &size);                                                         // read size from user

    int arr1[size];                                                             // create original array of given size
    int arr2[size];                                                             // create second array to store unique elements
    int new_size;                                                               // variable to store count of unique elements

    printf("Enter elements into the array: ");                                  // ask user to enter array elements
    for(int i = 0; i < size; i++)                                               // loop to read each element
    {
        scanf("%d", &arr1[i]);                                                  // read each number into original array
    }

    fun(arr1, size, arr2, &new_size);                                           // call function and pass arrays and address of new_size

    printf("After removing duplicates: ");                                      // print message before output
    for(int i = 0; i < new_size; i++)                                           // loop only till number of unique elements
    {
        printf("%d ", arr2[i]);                                                 // print each unique element
    }

    return 0;                                                                   // end the program
}
