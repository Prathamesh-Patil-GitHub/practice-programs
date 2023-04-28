#include<stdio.h>
void main()
{
    int n,i=1,x=0,y=1,sum;
    printf("Upto how many terms do you want fibonacci series?");
    scanf("%d",&n);
    while(i<=n)
    {

       printf("\t%d",x);
    sum=x+y;
    x=y;
    y=sum;
    i++;
    }
}
