#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void main()
{
    int i=0;
    char str[100]={"This program is developed in free time so please don't judge its quality;) XD"};
    while(str[i]!='\0')
    {
        Sleep(50);
        printf("%c",str[i]);
        i++;
    }
}
