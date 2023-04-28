#include<stdio.h>
void main()
{
    FILE *fp;
    char s[30];
    fp=fopen("f1.txt","w");
    printf("Enter you name");
    gets(s);
    fputs(s,fp);
    fclose(fp);
}
