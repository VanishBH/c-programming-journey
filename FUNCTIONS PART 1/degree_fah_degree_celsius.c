#include<stdio.h>

//function to convert degree fahrenheit to degree celsius
float temperature(float fah)  //this function takes the double value 'fah' and returns the corresponding temperature celsius
{
   float cels;                  //declare the variable 'cels' to store the celsius value
   cels=(5.0/9.0) * (fah-32);     //apply the formula
   return cels;                 //return the celsius value to the function caller(main function)
}

int main()
{
    float fah;                 //variable to store temperature in fahrenheat
    float cels;                //variable to store temperature in celsius (result from the function)
    
    scanf("%f",&fah);                  //Read the fajrenheat input from the user
    
    cels=temperature(fah);             //call the  'temperature' function and stored the return celsius value in 'cels'
    
    printf("Degree Celsius %f",cels);
    
    return 0;
}