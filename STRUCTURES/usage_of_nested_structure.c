#include<stdio.h>
#include<string.h>

//inner structure
struct address
{
    char state[100];
    int zip;
};

//outer structure nested
struct student
{
    int id;
    char name[100];
    struct address addr;   // nested structure
};
int main()
{
    struct student s1={18, "Virat",{"Bangalore",560023}}; // initializing during declaration
    
    struct student s2;   //read details from the user
    
    printf("Enter id: ");
    scanf("%d", &s2.id);
    
    printf("Enter Name: ");
    scanf("%s", s2.name);
    
    printf("Enter State: ");
    scanf("%s", s2.addr.state);
    
    printf("Enter Zip code: ");
    scanf("%d", &s2.addr.zip);
    
    //student 1 details
    printf("\nStudent 1 details:\n");
    printf("Id: %d\n",s1.id);
    printf("Name: %s\n",s1.name);
    printf("State: %s\n",s1.addr.state);
    printf("Zip code: %d\n",s1.addr.zip);
    
    
    //student 2 details
    printf("\nStudent 2 details:\n");
    printf("Id: %d\n",s2.id);
    printf("Name: %s\n",s2.name);
    printf("State: %s\n",s2.addr.state);
    printf("Zip code: %d\n",s2.addr.zip);
    
    
    
    
    return 0;
}