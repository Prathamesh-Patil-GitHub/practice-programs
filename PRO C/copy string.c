#include<stdio.h>
void main()
{
    char str[30],copy[30];
    int i=0;
    printf("Enter the string");
    gets(str);
    while(str[i]!='\0')
    {
        copy[i]=str[i];
        i++;
    }
    copy[i]='\0';
    printf("\nOriginal string is %s",str);
    printf("\nCopied string is %s",copy);
}
