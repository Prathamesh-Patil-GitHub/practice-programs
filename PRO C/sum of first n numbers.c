#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("How many first numbers do you want to add?");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("\nThe addition of first positive %d numbers is %d",n,sum);
}
