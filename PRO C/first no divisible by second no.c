#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter first number");
    scanf("%d",&x);
    printf("\nEnter second number");
    scanf("%d",&y);
    if(x%y==0)
        printf("\nThe number %d is divisible by %d",x,y);
    else
        printf("\nThe number %d  is not divisible by %d",x,y);
}
