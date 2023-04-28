#include<stdio.h>
int sqr(int);
void main()
{
    int i,sq;
    printf("Enter the number");
    scanf("%d",&i);
    sq=sqr(i);
    printf("\nThe square of %d is %d",i,sq);
}
int sqr(int i)
{
    int s=i*i;
    return (s);
}
