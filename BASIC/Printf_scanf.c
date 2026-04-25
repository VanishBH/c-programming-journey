#include <stdio.h>

int main ()
{
    char name_letter;
    int pincode;
    float height;
    double latitude, longitude;
    
    scanf("%c %d %f %lf %lf", &name_letter, &pincode, &height, &latitude, &longitude);
    
    printf("here is what you have entered:\n");
    printf("first letter in name %c\n", name_letter);
    printf("pincode %d\n", pincode);
    printf("height %f\n", height);
    printf("location %lf %lf\n", latitude, longitude);
    
    return 0;
}