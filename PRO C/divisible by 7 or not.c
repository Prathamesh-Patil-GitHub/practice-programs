#include<stdio.h>
void main()
{
    int i;
    printf("Enter a number");
    scanf("%d",&i);
    if(i%7==0)
        printf("\nThe number %d is divisible by 7",i);
    if(i%7!=0)
        printf("\nThe number %d is not divisible by 7",i);
}

