#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[30];
    char address[100];
};
void pass_by_value(struct student s1)
{
    s1.id=10;
    strcpy(s1.name, "Emertxe");
    strcpy(s1.address, "Bangalore");
    
    printf("Value of id = %d\n", s1.id);
    printf("Name of student = %s\n",s1.name);
    printf("Address = %s\n",s1.address);
    
}
void pass_by_reference(struct student *s1)
{
    s1->id=10;
    strcpy(s1->name, "Emertxe");
    strcpy(s1->address, "Bangalore");
    
    printf("Value of id = %d\n", s1->id);
    printf("Name of student = %s\n",s1->name);
    printf("Address = %s\n",s1->address);
    
}
int main()
{
    struct student s1;
    pass_by_value(s1);
    pass_by_reference(&s1);
    
    return 0;
}