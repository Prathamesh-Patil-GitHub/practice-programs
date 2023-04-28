#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("\n%c is capital letter",ch);
    else
    if(ch>='a' && ch<='z')
        printf("\n%c is small letter",ch);
    else
    if(ch>='0' && ch<='9')
        printf("\n%c is a digit",ch);
    else
        printf("\n%c is a special symbol",ch);
}
