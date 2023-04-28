#include<stdio.h>
void main()
{
    int x,y;
    float s;
    printf("\nFor square root function:");
    printf("Enter the number");
    scanf("%d",&x);
    s=sqrt(x);
    printf("\nThe square root of %d is %f",x,s);
    printf("\n\nNow For Power Function:");
    printf("\nEnter the value of base number");
    scanf("%d",&x);
    printf("\nEnter the value of index number");
    scanf("%d",&y);
    s=pow(x,y);
    printf("\n%d ^ %d = %0.2f",x,y,s);
}
