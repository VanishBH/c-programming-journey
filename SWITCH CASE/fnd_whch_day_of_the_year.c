#include <stdio.h>                                                              // This line includes standard input-output functions like scanf and printf

int main()                                                                      // main function is the starting point of the program

{
    int n, day,sum;                                                             // day  → stores the starting day number (1 to 7)
                                                                                // n    → stores the number of days
                                                                                // sum  → stores the calculated day value
                   
                                                                                // printf("Enter the value of n:\n");
                                                                                
    
    scanf("%d ",&n);                                                            // scanf is used to read the value of n from the user
    
                                                                                // printf("Choose the first day:\n, 1.Sunday\n, 2.Monday\n, 3.Tuesday\n, 4.Wednesday\n, 5.Thursday\n, 6.Friday\n, 7.Saturday\n");
                                                                                
   
    scanf("%d", &day);                                                          // scanf is used to read the value of starting day from the user
    
    
    
    if(n>=1 && n<=365)                                                          // This condition checks whether n is between 1 and 365
   
    {
        
        
                                                                                //printf("The day is %d ",n);
        
    
        if(day>=1 && day<=7)                                                    // This condition checks whether day is between 1 and 7
        {
    
                                                                                //printf("where start day = %d\n",day);
        
        
        sum=(n+day-1)%7;                                                        // This formula calculates the final day after n days
                                                                                // % 7 is used to keep the value within 0–6 range
        }
        else{
              printf("Error: invalid Input, first day should be > 0 and <= 7"); // This message is printed if day is not between 1 and 7.
        }
        
    }            
    else{
        printf("Error: Invalid Input, n value should be > 0 and <= 365");       // This message is printed if n is not between 1 and 365
    }
                   
            
    
    
    
     switch(sum)                                                                // switch is used to match the value of sum.
     {
        
        case 1: // If sum is 1
        printf("The day is Sunday");
        break;  // break stops execution of switch

        
        case 2:  // If sum is 2
        printf("The day is Monday");
        break;  // break stops execution of switch

        
        case 3:  // If sum is 3
        printf("The day is Tuesday ");
        break;  // break stops execution of switch

        
        case 4:  // If sum is 4
        printf("The day is Wednesday");
        break;  // break stops execution of switch

        
        case 5:  // If sum is 5
        printf("The day is Thursday");
        break;  // break stops execution of switch

        
        case 6:  // If sum is 6
        printf("The day is Friday");
        break;  // break stops execution of switch

        
        case 0:  // If sum is 0
        printf("The day is saturday");
        break;  // break stops execution of switch

        
   
        
        
     }
     
    return 0 ; // return 0 indicates the program ended successfully.
}