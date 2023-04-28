#include<stdio.h>
void main()
{
    int x,y,*p,*q;
    p=&x;
    q=&y;
    printf("Enter the value of x");
    scanf("%d",&x);
    printf("\nEnter the value of y");
    scanf("%d",&y);
    printf("\nThe value of x through pointer is %d",*p);
    printf("\nThe value of y through pointer is %d",*q);
}
