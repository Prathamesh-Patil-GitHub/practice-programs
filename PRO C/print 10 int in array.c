#include<stdio.h>
void main()
{
    int a[10],i;
    printf("Enter ten integers");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        printf("\n%d",a[i]);
}
