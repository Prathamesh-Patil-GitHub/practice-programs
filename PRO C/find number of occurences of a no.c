#include<stdio.h>
void main()
{
    int n,t,n1,r,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    printf("\nEnter the digit to find");
    scanf("%d",&n1);
    t=n;
    while(n!=0)
    {
        r=n%10;
        if(r==n1)
            c++;
        n=n/10;
    }
    printf("\nThe number %d occurs %d times in number %d",n1,c,t);
}
