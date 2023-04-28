#include<stdio.h>
#define SIZE 10
void main()
{
    int a[SIZE],i,max=0;
    printf("Enter %d numbers",SIZE);
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
            max=a[i];
    }
    printf("\nThe maximum number from given numbers is %d",max);
}
