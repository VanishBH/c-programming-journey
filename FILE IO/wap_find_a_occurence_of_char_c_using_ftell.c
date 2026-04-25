#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int count = 0;
    long position;
    
    fp = fopen("test.txt", "r");
    if(fp==NULL)
    {
        printf("Error cannot open file.\n");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='c')
        {
            position = ftell(fp);
            printf("Position: %ld\n",position-1);
            count++;
        }
    }
    printf("\nTotal occurrences of 'c' : %d\n",count);
    
    //close files
    fclose(fp);
    
    return 0;
}