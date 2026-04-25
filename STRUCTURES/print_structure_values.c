
#include<stdio.h>
#include<string.h>
int main()
{
    struct college
    {
        char name[20];
        int id;
        char address[60];
    };
    
    struct college s1;
    strcpy(s1.name, "Emertxe");
    s1.id = 100;
    strcpy(s1.address, "Bangalore");
    
    printf("Structure 1 has name = %s, ",s1.name);
    printf("id = %d,",s1.id);
    printf("address = %s\n",s1.address);
    
  
    return 0;
}