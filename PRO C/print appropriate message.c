#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character from A to D");
    scanf("%c",&ch);
    if(ch=='A')
        printf("\nApple");
    else
        if(ch=='B')
        printf("\nBall");
    else
        if(ch=='C')
        printf("\nCat");
    else
        if(ch=='D')
        printf("\nDog");
    else
        printf("\nInvalid Input");
}
