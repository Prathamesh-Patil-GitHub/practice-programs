#include<stdio.h>
#define SIZE 5
int Greatest(int [],int);
void main()
{
    int a[SIZE],i,max;

    printf("Enter %d numbers",SIZE);
    for(i=0;i<SIZE;i++)
        scanf("%d",&a[i]);

    max=Greatest(a,SIZE);

    printf("\nThe greatest number of given numbers is %d",max);
}
int Greatest(int a[],int n)
{
    int i,max;

    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }

    return max;
}
