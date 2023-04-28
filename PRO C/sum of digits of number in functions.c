#include<stdio.h>
int sum(int);
void main()
{
    int i,s;
    printf("Enter the number");
    scanf("%d",&i);
    s=sum(i);
    printf("\nThe summation of the digits of the given number is %d",s);
}
int sum(int n)
{
    int r,sum=0;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
}
