#include<stdio.h>
void main()
{
    int n,arm,r,t;
    printf("Enter the number");
    scanf("%d",&n);
    t=n;
    arm=0;
    while(n!=0)
    {
        r=n%10;
        arm=arm+r*r*r;
        n=n/10;
    }
    if(arm==t)
        printf("\n%d is an armstrong number",t);
    else
        printf("\n%d is not an armstrong number",t);
}
