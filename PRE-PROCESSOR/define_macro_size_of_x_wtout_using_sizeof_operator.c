
#include<stdio.h>   // Header file for input/output functions like printf

// Macro to calculate size of variable using pointer arithmetic
#define SIZEOF(a)  ((char*)(&a+1)-(char*)(&a))

int main()   // Entry point of the program
{
    signed char a1 ;              // Declare signed char variable
    unsigned char b1;             // Declare unsigned char variable
    signed short s1;              // Declare signed short variable
    unsigned short s2;            // Declare unsigned short variable
    signed int n1;                // Declare signed int variable
    unsigned int n2;              // Declare unsigned int variable
    signed long l1;               // Declare signed long variable
    unsigned long l2;             // Declare unsigned long variable
    signed long long ll1;         // Declare signed long long variable
    unsigned long long ll2;       // Declare unsigned long long variable
    float f1;                     // Declare float variable
    double lf;                    // Declare double variable
    long double llf;              // Declare long double variable
    
    // Print size of signed char using macro
    printf("Size of signed char : %zu\n",SIZEOF(a1));
    
    // Print size of unsigned char using macro
    printf("Size of unsigned char : %zu\n",SIZEOF(b1));
    
    // Print size of signed short
    printf("Size of signed short : %zu\n",SIZEOF(s1));
    
    // Print size of unsigned short
    printf("Size of unsigned short : %zu\n",SIZEOF(s2));
    
    // Print size of signed int
    printf("Size of signed int : %zu\n",SIZEOF(n1));
    
    // Print size of unsigned int
    printf("Size of unsigned int : %zu\n",SIZEOF(n2));
    
    // Print size of signed long
    printf("Size of signed long : %zu\n",SIZEOF(l1));
    
    // Print size of unsigned long
    printf("Size of unsigned long : %zu\n",SIZEOF(l2));
    
    // Print size of signed long long
    printf("Size of signed long long : %zu\n",SIZEOF(ll1));
    
    // Print size of unsigned long long
    printf("Size of  unsigned long long : %zu\n",SIZEOF(ll2));
    
    // Print size of float
    printf("Size of  float : %zu\n",SIZEOF(f1));
    
    // Print size of double
    printf("Size of  double : %zu\n",SIZEOF(lf));
    
    // Print size of long double
    printf("Size of long double : %zu\n",SIZEOF(llf));
   
    return 0;   // End of program, return 0 to OS
}