#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("\nThe factorial of number %d is %d",n,fact);
}
