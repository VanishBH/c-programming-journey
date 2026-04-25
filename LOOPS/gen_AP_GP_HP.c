#include<stdio.h>                                                               // Includes standard input-output functions like printf and scanf
int main()                                                                      // Main function where program execution starts
{
    int start_value;                                                            // Stores the first term of the series
    int difference_value;                                                       // Stores the common difference (AP) or ratio (GP)
    int n;                                                                      // Stores the number of terms to print
    int ap;                                                                     // Stores current Arithmetic Progression term
    int gp;                                                                     // Stores current Geometric Progression term
    float hp;                                                                   // Stores current Harmonic Progression term (needs decimal)
    
    
    printf("Enter start value:");                                               // Ask user to enter starting value
    scanf("%d", &start_value);                                                  // Read starting value from user

    
    printf("Enter difference value:");                                          // Ask user to enter difference or ratio
    scanf("%d", &difference_value);                                             // Read difference value
    
    printf("Enter n terms:");                                                   // Ask user for number of terms
    scanf("%d", &n);                                                            // Read number of terms
    
    
    if(n>0)                                                                     // Check if number of terms is positive
    {
        ap=start_value;                                                         // Initialize AP with starting value
        printf("AP = ");                                                        // Print label for Arithmetic Progression
        for(int i=1; i<=n; i++)                                                 // Loop to generate n AP terms
        {
            printf("%d, ", ap);                                                 // Print current AP term
            ap = ap + difference_value;                                         // Calculate next AP term
            
        }
        
        
         gp = start_value;                                                      // Initialize GP with starting value
         printf("\nGP = ");                                                     // Print label for Geometric Progression
         for(int i=1; i<=n; i++)                                                // Loop to generate n GP terms
        {
            printf("%d, ", gp);                                                 // Print current GP term
            gp= gp * difference_value;                                          // Calculate next GP term
            
        }
         ap = start_value;                                                      // Reset AP for HP calculation
         printf("\nHP = ");                                                     // Print label for Harmonic Progression
         for(int i=1; i<=n; i++)                                                // Loop to generate n HP terms
        {
            hp= 1.0/ap;                                                         // Calculate HP as reciprocal of AP term
            printf("%f, ", hp);                                                 // Print HP term with 2 decimal places
            ap = ap + difference_value;                                         // Move to next AP term
            
        }
        
    }
    else
    {
        printf("Invalid input");
    }
    
    return 0;                                                                   // End of program
}