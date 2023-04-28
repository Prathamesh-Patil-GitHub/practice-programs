#include<stdio.h>
void main()
{
    char str[30];
    int i=0;
    printf("Enter the string");
    gets(str);
    while(str[i]!='\0')
    {
        printf("\n%c",str[i]);
        i++;
    }
    i--;
    printf("\nReverse is");
    while(i>=0)
    {
        printf("\n%c",str[i]);
        i--;
    }

}
