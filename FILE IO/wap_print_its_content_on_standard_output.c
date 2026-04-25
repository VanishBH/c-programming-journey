#include<stdio.h>
int main()
{
    FILE *fp1;
    char ch;
    
    //open the source file in read mode
    
    fp1 = fopen("text.txt", "r");
    if(fp1==NULL)
    {
        printf("Error: cannot open source file!\n");
        return 1;
    }
    
    while((ch = fgetc(fp1)!= EOF))
    {
        fputc(ch, stdout);
    }
    
    printf("\nPrinted Contents Successfully to stdout.\n");
    
    //close the file fp1;
    
    fclose(fp1);
    return 0;
}