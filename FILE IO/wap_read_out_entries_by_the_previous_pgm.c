#include<stdio.h>
#include<string.h>

struct student
{
    char name[24];
    unsigned char p, c, m;
};
int main()
{
    FILE *fptr;
    
    fptr = fopen("binary.out","rb");
    if(fptr==NULL)
    {
        printf("ERROR: FILE DOESNT EXIST");
        return 0;
    }
    int size;
    if(fread(&size,4,1, fptr)==0)
    {
        printf("ERROE: failed to read no of students");
        return 0;
    }
    
    struct student s[size];
    
    for(int i=0; i<size; i++)
    {
        if(fread(&s[i], sizeof(struct student), 1, fptr)==0)
        {
            printf("ERROR: failed to read details of students");
            return 0;
        }
    }
    
    float pavg=0, cavg=0, mavg=0;
    
    if(fread(&pavg,4,1,fptr)==0)
    {
        printf("ERROR: failed to read avg of physics");
        return 0;
    }
    
    if(fread(&cavg,4,1,fptr)==0)
    {
        printf("ERROR: failed to read avg of chemistry");
        return 0;
    }
    
    if(fread(&mavg,4,1,fptr)==0)
    {
        printf("ERROR: failed to read avg of maths");
        return 0;
    }
    
    fclose(fptr);
    
    char *strline = "------------------------------";
    printf("%s\n"  "%-25s" "%10s" "%10s\n"  "%10s\n" "%s\n", strline, "Name", "Maths", "Physics", "Chemistry", strline);
    
    for(int i=0; i<size; i++)
    {
        printf("%-25s  %10d  %10d\n  %10d\n", s[i].name, s[i].m, s[i].p, s[i].c);
    }
    
    printf("%s\n"  "%-25s" "%10g" "%10g\n"  "%10g\n" "%s\n", strline, "Average", mavg, pavg, cavg, strline);
    
    return 0;
}