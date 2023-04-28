#include<stdio.h>
void main()
{
    int a[10],item,n=10,beg=0,end=9,i,mid;
    printf("\nEnter 10 numbers in sorted manner");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the value to search");
    scanf("%d",&item);
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==item)
        {
            printf("\nThe value %d found at %d position(Starting from 0)",item,mid);
            break;
        }
        else if(a[mid]>item)
            end=mid-1;
        else
            beg=mid+1;
    }
    if(beg>end)
    printf("\n%d is not found in the array",item);
}
