#include<stdio.h>
void main()
{
    int i=0;
    char s[100];
    FILE *fp;
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("File Not Found");
        exit(1);
    }
    printf("Enter the string");
    gets(s);
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);
        getch();
    fclose(fp);
    getch();
}
