#include<stdio.h>
void main()
{
    int a[10],n,i;
    printf("Enter 10 integers.");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the no. you want to find.");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(a[i]==n)
            break;
    }
    if(i==10)
        printf("\n%d is not found in the array",n);
    else
        printf("\n%d is found in the array",n);
}
