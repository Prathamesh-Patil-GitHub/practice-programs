#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter first number");
    scanf("%d",&x);
    printf("\nEnter second number");
    scanf("%d",&y);
    printf("\nBefore swapping");
    printf("\nFirst Number is %d \nSecond Number is %d",x,y);
    int t=x;
    x=y;
    y=t;
    printf("\nAfter swapping");
    printf("\nFirst Number is %d",x);
    printf("\nSecond Number is %d",y);
}
