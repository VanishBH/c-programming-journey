#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        char ch;
        int id;
        float marks;
        char name[100];
    };
    struct student s1;
    
    scanf(" %c", &s1.ch);
    scanf("%d", &s1.id);
    scanf("%f", &s1.marks);
    scanf("%s", s1.name);
    
    
    printf("%c ", s1.ch);
    printf("%d ", s1.id);
    printf("%g ", s1.marks);
    printf("%s ", s1.name);
    
    return 0;
}
