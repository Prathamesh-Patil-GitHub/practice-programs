#include<stdio.h>
void main()
{
    int n,sum,t,r,k;
    printf("Armstrong numbers from 1 to 500 are:");
    for(k=1;k<=500;k++)
    {
        n=k;
        sum=0;
        t=n;
        while(n!=0)
        {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
        }
    if(sum==t)
        {
            printf("\n%d",t);
        }
    }
}
