#include<stdio.h>
void main()
{
    char str[30],i;
    printf("Enter the string");
    gets(str);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("\nLength of the string is %d",i);
}
