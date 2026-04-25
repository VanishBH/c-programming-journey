#include <stdio.h>                                                              // This line is uded to include standard input and output function

int main()                                                                      //Main is the starting point of the C program.
{
    
    int num1,num2,num3,middle;                                                  // Declare the four variables: num1, num2, num3, and middle is to store the variables
    
    
    printf("Enter the Three numbers: \n");                                      // To print the variables
    
    
    scanf("%d %d %d", &num1, &num2, &num3);                                     //Reads three intiger values from the user and stores it into num1, num2, num3.
    
    
    middle= (num1,num2,num3);                                                   // num1, num2, num3 values are checked and stored it in the middle.
    
    
    if((num1>num2 && num1<num3)||(num1<num2 && num1>num3))                      // Checks whether the 'num1'is lies between 'num2 and num3'.
    {
        middle = num1;                                                          // Assighn the value stored in 'num1' to the variable 'middle'
    }
    
    
    else if((num2>num1 && num2<num3)||(num2<num1 && num2>num3))                 //checks whether the  'num2' is lies between 'num1 and num3'. 
    {
        middle = num2;                                                          // Assighn the value stored in 'num2' to the variable 'middle'
    }
    
    
    else{
        middle =num3;                                                           // Assighn the value stored in 'num3' to the variable 'middle'
    }
    
    
    printf("The middle number is %d\n",middle);
    return 0;
}