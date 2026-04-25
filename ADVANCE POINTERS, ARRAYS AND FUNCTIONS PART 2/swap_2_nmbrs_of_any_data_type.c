#include<stdio.h>

//function to swqap values using a temporary buffer

void swap(void *a, void *b, size_t size)
{
    unsigned char temp[size];
    for(size_t i=0; i<size; i++)
    {
        temp[i] = *((unsigned char *)a + i); // corrected indexing
        *((unsigned char *)a + i) = *((unsigned char *)b + i);
        *((unsigned char *)b + i) = temp[i];
    }
    
}

int main()
{
    int num1 = 10;
    int num2 = 20;//int
    
    
    printf("Before swapping num1 = %d, num2 = %d", num1, num2);
    
    swap(&num1, &num2, sizeof(int)); //func call
    printf("\nAfter swapping num1 = %d, num2 = %d\n", num1, num2);
    
    float n1 = 10.5;
    float n2 = 20.5;//float
   
    
    printf("Before swapping n1 = %g, n2 = %g", n1, n2);
    
    swap(&n1, &n2, sizeof(float)); //func call
    printf("\nAfter swapping n1 = %g, n2 = %g\n", n1, n2);
    
    
   /* short a1;
    short a2;//
    scanf("%d %d", &a1, &a2);
    printf("Before swapping a1 = %d, n2 = %d", a1, a2);
    swap(&a1, &a2, sizeof(short)); //func call
    printf("\nAfter swapping a1 = %d, a2 = %d\n", a1, a2);
    
    
    double m1;
    double m2;//float
    scanf("%lf %lf", &m1, &m2);
    printf("Before swapping n1 = %.2lf, n2 = %.2lf", m1, m2);
    swap(&m1, &m2, sizeof(double)); //func call
    printf("\nAfter swapping m1 = %.2lf, m2 = %.2lf\n", m1, m2);
    
     
    char b1;
    char b2;//
    scanf("%c %c", &b1, &b2);
    printf("Before swapping b1 = %c, b2 = %c", b1, b2);
    swap(&b1, &b2, sizeof(char)); //func call
    printf("\nAfter swapping a1 = %c, a2 = %c\n", b1, b2);*/
    
    
    
    
    
    
    return 0;
}