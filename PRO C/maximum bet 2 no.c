#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter first integer");
    scanf("%d",&x);
    printf("\nEnter second integer");
    scanf("%d",&y);
    if(x>y)
        printf("\n%d is maximum",x);
    else
     if(y>x)
        printf("\n%d is maximum",y);
    else
        printf("\nBoth integers are same bro!!!");
}
