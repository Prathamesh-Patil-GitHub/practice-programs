#include<stdio.h>
void main()
{
    int n,fd,ld,r,sum;
    printf("Enter the number");
    scanf("%d",&n);
    ld=n%10;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
    }
    fd=r;
    sum=fd+ld;
    printf("\nThe addition of first and last digit of given number is %d",sum);
}
