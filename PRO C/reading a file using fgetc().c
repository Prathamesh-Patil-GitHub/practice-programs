#include<stdio.h>
void main()
{
    char ch;
    FILE *fp;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("File Not Found");
        exit(1);
    }
    ch=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
}
