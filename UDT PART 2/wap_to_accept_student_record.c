#include<stdio.h>
#include<string.h>

struct students
{
    char name[50];
    int marks[3];
};

int main()
{
    int size, num;
    
    printf("Enter number of the students : ");
    scanf("%d", &size);
    
    struct students s1[size];
    
    for(int i=0; i<size; i++)
    {
        printf("Enter the name of student : ");
        scanf("%s", s1[i].name);
        
        printf("Enter P, C and M marks : ");
        scanf("%d",&s1[i].marks[0]);
        scanf("%d",&s1[i].marks[1]);
        scanf("%d",&s1[i].marks[2]);
    }
    
    printf("-------------------------------------------\n");
    printf("Name Maths Physics Chemistry\n");
    printf("-------------------------------------------\n");
    
    for(int i=0; i<size; i++)
    {
        printf("\n%s ", s1[i].name);
        printf("%d ",s1[i].marks[2]);
        printf("%d ",s1[i].marks[0]);
        printf("%d\n",s1[i].marks[1]);
    }
    
    printf("-------------------------------------------\n");
    
    int psum=0, csum=0, msum=0;
    
    for(int i=0; i<size; i++)
    {
        psum = psum+s1[i].marks[0];
        csum = csum+s1[i].marks[0];
        msum = csum+s1[i].marks[0];
    }
    
    if(size==0)
    {
        return 0;
    }
    
    float pavg=0, cavg=0, mavg=0;
    
    mavg=(float)msum/size;
    pavg=(float)psum/size;
    cavg=(float)csum/size;
    
    printf("Average %g  %g  %g",mavg, pavg, cavg);
    
    return 0;
}