#include<stdio.h>
void main()
{
    char str[30];
    int i=0;
    printf("Enter the string");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
        i++;
    }
    printf("Converted string is %s",str);
}
