#include <stdio.h>                                                              // Standard input/output functions like printf and scanf
#include <stdlib.h>                                                             // For dynamic memory functions like malloc and free

// Function prototype declaration for variance function
float variance(float *arr, int size);

int main()
{
    int size;                                                                   // Variable to store number of elements

    // Asking user to enter number of elements
    printf("Enter the number of elements : ");
    scanf("%d", &size);                                                         // Reading size from user

    // Dynamically allocating memory for 'size' number of float elements
    float *arr = malloc(sizeof(float) * size);

    // Asking user to input the elements
    printf("Enter the %d elements:\n", size);

    // Loop to read elements one by one
    for(int i = 0; i < size; i++)
    {
        printf("[%d] -> ", i);                                                  // Displaying index position
        scanf("%f", &arr[i]);                                                   // Storing value in dynamically allocated array
    }

    // Calling variance function and storing returned result
    float result = variance(arr, size);

    // Printing the calculated variance
    printf("Variance is %f\n", result);

    // Freeing dynamically allocated memory to avoid memory leak
    free(arr);

    return 0;                                                                   // Indicating successful program execution
}

// Function definition to calculate variance
float variance(float *arr, int size)
{
    float sum = 0.0;                                                            // Variable to store sum of all elements
    float sum_x_xi = 0.0;                                                       // Variable to store sum of squared differences

    // Loop to calculate sum of array elements
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];                                                          // Adding each element to sum
    }

    // Calculating mean (average)
    float mean = sum / size;

    // Loop to calculate squared difference from mean
    for(int i = 0; i < size; i++)
    {
        // (xi - mean)^2 calculation and adding to total
        sum_x_xi = sum_x_xi + (arr[i] - mean) * (arr[i] - mean);
    }

    // Variance formula: sum of squared differences divided by number of elements
    float var = sum_x_xi / size;

    // Returning calculated variance value
    return var;
}