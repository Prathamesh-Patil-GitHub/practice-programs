#include<stdio.h>
void main()
{
    int n,r,max;
    printf("Enter the number");
    scanf("%d",&n);
    max=0;
    while(n!=0)
    {
        r=n%10;
        if(r>max)
            max=r;
        n=n/10;
    }
    printf("\nThe greatest digit of the given number is %d",max);
}
