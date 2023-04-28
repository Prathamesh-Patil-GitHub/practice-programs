#include<stdio.h>
int fact(int);
void main()
{
    int f,n;
    printf("Enter the number");
    scanf("%d",&n);
    f=fact(n);
    printf("\nThe factorial of %d is %d",n,f);
}
int fact(int n)
{
    int f;
    if(n==0)
        return 1;
    else
        f=n*fact(n-1);
    return f;
}
