#include <stdio.h>

int main()
{
    int age,TP;
    printf("Enter age of person\n");
    scanf("%d",&age);
    
    TP =(age);
    
    
    if(age>0 && age<=5){
        printf(" Children under 5 years old get in free!\nTicket price: Rs. 0.00");  
    }
    else if(age>=6 && age<=12){
        printf("Ticket price: Rs. 50.00");
        
    }
    else if(age>=13 && age<65){
        printf("Ticket price: Rs. 100.00");
    }
    else{
        printf("Ticket price: Rs. 80.00");
    }
    return 0;
}