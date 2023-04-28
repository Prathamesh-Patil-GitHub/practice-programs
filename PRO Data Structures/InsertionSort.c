#include<stdio.h>
void main()
{
    int a[10],n=10,i,k,temp;
    printf("\nEnter 10 numbers to sort ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(k=1;k<n;k++)
    {
        temp=a[k];
        i=k-1;
        while(i>=0 && a[i]>temp)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=temp;
    }
    printf("\nNumbers after Insertion Sort \n");
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
}
