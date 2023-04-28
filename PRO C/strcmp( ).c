#include<stdio.h>
void main()
{
    char str[30],str1[30];
    int x;
    printf("Enter the string");
    gets(str);
    strcpy(str1,str);
    strrev(str1);
    x=strcmp(str,str1);
    if(x==0)
        printf("\nThe given string is palindrome");
    else
        printf("\nThe given string is not palindrome");
}
