#include<stdio.h>
void main()
{
    int a[10],i,ecount=0,ocount=0;
    printf("Enter 10 nos.");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            ecount++;
        else
            ocount++;
    }
    printf("\nThe number of even numbers = %d\nThe number of odd numbers = %d",ecount,ocount);

}
