#include <stdio.h>
#include <stdarg.h>

int add(int count, ...)
{
    va_list ap;
    int iter;
    int sum;

    // Initialize the argument list 
    va_start(ap, count);

    sum = 0;

    for (iter = 0; iter < count; iter++)
    {
        //Extract arguments
        sum += va_arg(ap, int);
    }

    //Cleanup 
    va_end(ap);

    return sum;
}

int main()
{
    int ret;

    ret = add(3, 2, 4, 4);
    printf("Sum is %d\n", ret);

    ret = add(5, 3, 3, 4, 5, 10);
    printf("Sum is %d\n", ret);

    return 0;
}