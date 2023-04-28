#include<stdio.h>
void main()
{
    int n,rev,r,t;
    printf("Enter the number");
    scanf("%d",&n);
    t=n;
    rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
printf("\nThe reverse of number %d is %d",t,rev);
if(t==rev)
    printf("\n!!!!!!!!OOOOHHHHHHH this number is palindrome as well!!!!!!!!!!!");
}
