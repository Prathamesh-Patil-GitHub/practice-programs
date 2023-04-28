#include<stdio.h>
void main()
{
    int a[10],n,i=0;
    printf("Enter the number.");
    scanf("%d",&n);
    while(n!=0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    i--;
    printf("\n");
    while(i>=0)
    {
        printf("%d",a[i]);
        i--;
    }
}
