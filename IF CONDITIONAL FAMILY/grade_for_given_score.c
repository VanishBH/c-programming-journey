#include <stdio.h>

int main()
{
    int score,A,B,C,D,F, grade;
    
    printf("enter your score:\n");
    
    scanf("%d",&score);
    
     grade = (A,B,C,D,F);
    if(score>=90){
        
    if(score<=100){
        printf("Your grade is A \n");
    }
    }
    else if(score>=80){ 
        
     if(score<=89){
        printf("Your grade is B \n");
    }
    }
    else if(score>=70){ 
        
         if(score<=79){
        printf("Your grade is C \n");
        }
    }
    else if(score>=60){
        
       if(score<=69){
        printf("Your grade is D \n");
      }
    }
     if(score<=60){
        printf("Your grade is F \n");
        
    }
  
      
    return 0;
    
}