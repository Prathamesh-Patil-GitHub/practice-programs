#include<stdio.h>
void main()
{
    int a[10],i,sum=0;
    printf("Enter 10 integers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
printf("\nThe sum of given nos. is %d and their average is %f",sum,sum/10.0);
}
