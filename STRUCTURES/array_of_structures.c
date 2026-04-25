#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    char address[60];
};
int main()
{
    struct student s1[1]={10, "Tingu", "Bangalore"};
    
    for(int i=0; i<1; i++)
    {
       
        printf("Id:%d\n",s1[i].id);
        printf("name:%s\n",s1[i].name);
        printf("address:%s\n",s1[i].address);
    }
    
    
    struct student s2[1];
    
    for(int i=0; i<1; i++)
    {
        printf("Enter id:");
        scanf("%d", &s2[i].id);
        
        printf("Enter name:");
        scanf("%s", s2[i].name);
        
        printf("Enter address:");
        scanf("%s", s2[i].address);
    }
    
    for(int i=0; i<1; i++)
    {
       
        printf("Id:%d\n",s2[i].id);
        printf("name:%s\n",s2[i].name);
        printf("address:%s\n",s2[i].address);
    }
    return 0;
}