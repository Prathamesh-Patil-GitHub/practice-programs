#include<stdio.h>
void main()
{
    int m,n,i;
    printf("Enter the lowest value of the range");
    scanf("%d",&m);
    printf("\nEnter the highest value of the range");
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        if(i%6==0)
            printf("\n%d",i);
    }
}
