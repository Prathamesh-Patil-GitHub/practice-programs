#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the letter");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        ch=ch-32;
        printf("\nCapital letter is %c",ch);
    }
    else
    printf("\nNot a small letter");
}
