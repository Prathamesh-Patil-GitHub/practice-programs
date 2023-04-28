#include<stdio.h>
#define SQ(A) A*A
void main()
{
    int n,a;
    printf("Enter the number");
    scanf("%d",&n);
    a=SQ(n);
    printf("\nThe square of %d is %d",n,a);
}
