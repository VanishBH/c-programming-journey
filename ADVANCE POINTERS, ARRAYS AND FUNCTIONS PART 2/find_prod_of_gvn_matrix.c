
#include <stdio.h>                                                              // for input/output functions
#include <stdlib.h>                                                             // for dynamic memory allocation

// function to multiply matrices
int matrix_mul(int **mat_a, int row_a, int column_a, int **mat_b, int row_b, int column_b, int **result, int row_r, int column_r) 
{
    int i,j,k, sum=0;                                                           // loop variables and sum for storing multiplication result

    for(i=0; i<row_a; i++)                                                      // iterate through rows of matrix A
    {
        for(j=0; j<column_b; j++)                                               // iterate through columns of matrix B
        {
            sum = 0;                                                            // reset sum for each element

            for(k=0; k<column_a; k++)                                           // iterate through columns of A / rows of B
            {
                sum = sum+mat_a[i][k] * mat_b[k][j];                            // multiply and accumulate
            }

            result[i][j] = sum;                                                 // store computed value in result matrix
        }
    }

    return 0;                                                                   // return success
}

int main()
{
    int **mat_a, **mat_b, **result;                                             // double pointers for matrices

    int row_a, column_a;                                                        // dimensions of matrix A

    printf("Enter number of rows : ");   
    scanf("%d", &row_a);                                                        // read rows of A

    printf("Enter number of columns : ");
    scanf("%d", &column_a);                                                     // read columns of A

    mat_a = malloc(row_a * sizeof(int*));                                       // allocate memory for row pointers of A

    for(int i=0; i<row_a; i++)   
    {
        mat_a[i] =  malloc(column_a * sizeof(int));                             // allocate memory for each row (columns)
    }

    printf("Enter values for %d * %d matrix :\n",row_a, column_a);

    for(int i=0; i<row_a; i++)                                                  // input loop for A
    {
        for(int j=0; j<column_a; j++)
        {
            scanf("%d", &mat_a[i][j]);                                          // read each element
        }
    }

    int row_b, column_b;                                                        // dimensions of matrix B

    printf("Enter number of rows : ");
    scanf("%d", &row_b);                                                        // read rows of B

    printf("Enter number of columns : ");
    scanf("%d", &column_b);                                                     // read columns of B

    if(column_a != row_b)                                                       // check multiplication condition
    {
        printf("Matrix multiplication is not possible");   
        return 0;                                                               // exit if invalid
    }

    mat_b = malloc(row_b * sizeof(int*));                                       // allocate memory for row pointers of B

    for(int i=0; i<row_b; i++)
    {
        mat_b[i] = malloc(column_b * sizeof(int));                              // allocate memory for each row
    }

    printf("Enter values for %d * %d matrix :\n",row_b, column_b);

    for(int i=0; i<row_b; i++)                                                  // input loop for B
    {
        for(int j=0; j<column_b; j++)
        {
            scanf("%d", &mat_b[i][j]);                                          // read each element
        }
    }    

    int row_r = row_a;                                                          // result rows = rows of A
    int column_r = column_b;                                                    // result columns = columns of B

    result = malloc(row_r * sizeof(int* ));                                     // allocate memory for result rows

    for(int i=0; i<row_r; i++)
    {
        result[i] = malloc(column_r * sizeof(int));                             // allocate memory for each row
    }

    int res = matrix_mul(mat_a, row_a, column_a, mat_b, row_b, column_b, result, row_r, column_r);   // call multiplication function

    printf("Product of two matrix :\n");

    for(int i=0; i<row_r; i++)                                                  // print result matrix
    {
        for(int j=0; j<column_r; j++)
        {
            printf("%d ",result[i][j]);                                         // print each element
        }
        printf("\n");                                                           // move to next row
    }

    return 0;                                                                   // end program
}