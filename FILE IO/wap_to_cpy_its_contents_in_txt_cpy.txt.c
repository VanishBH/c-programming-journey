#include<stdio.h>
int main()
{
    FILE *fp1, *fp2;
   
    fp1 = fopen("text.txt", "r");
    if(fp1==NULL)
    {
        printf("Source File not found!!\n");
        return 1;
    }
    
    fp2 = fopen("text_cpy.t", "w");
    if(fp2==NULL)
    {
        printf("Destination File not found!!\n");
        fclose(fp1);  //close the source file before exiting
        return 1;
    }
    char ch;
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    printf("File coppied successfully!\n");

    fclose(fp1);
    fclose(fp2);
    
    return 0;
}