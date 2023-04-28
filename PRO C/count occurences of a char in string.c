#include<stdio.h>
void main()
{
    char str[30],ch;
    int i=0,c=0;
    printf("Enter the string");
    gets(str);
    printf("\nEnter the character you want to count");
    scanf("%c",&ch);
    while(str[i]!='\o')
    {
        if(str[i]==ch)
            c++;
        i++;
    }
    printf("\nThe character %c occurs %d times on the string",ch,c);
}
