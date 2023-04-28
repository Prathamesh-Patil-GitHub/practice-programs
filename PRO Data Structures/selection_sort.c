#include<stdio.h>
void main()
{
    int a[10],n=10,temp,k,i,pos;
    printf("\nEnter 10 nos. ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(k=0;k<=n-2;k++)
    {
        pos=k;
        for(i=k+1;i<=n-1;i++)
        {
            if(a[i]<a[pos])
                pos=i;
        }
        temp=a[pos];
        a[pos]=a[k];
        a[k]=temp;
    }
    printf("\nSorted array is:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
