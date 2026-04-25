#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
};
struct student s1;
int main()
{
    struct student *sptr = &s1;
                                    // using -> operator 
    scanf("%d",&sptr->id);
    scanf("%s",sptr->name);
    
    printf("Value of id is %d", sptr->id);
    printf("\nName is %s", sptr->name);
    
    return 0;
}