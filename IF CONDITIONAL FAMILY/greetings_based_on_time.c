#include <stdio.h>

int main()
{
    int time;
    printf("Enter the time: ");
    scanf("%d", &time);
    
    if(time>=5 && time<=11){
        printf("Good morning!\n");
    }
    else if (time >=12 && time <= 15){
        printf("Good afternoon! \n");
    }
     else if (time >=16 && time <=21){
        printf("Good evening! \n");
    }
     else if (time >=22 && time <=23){
        printf("Good night! \n");
    }
    else if (time >=0 && time <=4){
        printf("Good night! \n");
    }
    else{
        printf("Invalid hour! \n");
    }
    
     return 0;
}