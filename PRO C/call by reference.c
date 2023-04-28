#include<stdio.h>
void swap(int*,int*);
void main()
{
    int x,y;
    printf("Enter the value of x");
    scanf("%d",&x);
    printf("\nEnter the value of y");
    scanf("%d",&y);
    swap(&x,&y);
    printf("\nAfter swapping");
    printf("\n x = %d",x);
    printf("\n y = %d",y);
}
void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
