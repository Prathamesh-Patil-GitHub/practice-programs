#include<stdio.h>
void swap(int *,int *);
void main()
{
    int x=10,y=20;
    printf("Before swapping");
    printf("\nx = %d",x);
    printf("\ny = %d",y);
    swap(&x,&y);
    printf("\nAfter swapping");
    printf("\nx =% d",x);
    printf("\ny = %d",y);
}
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
