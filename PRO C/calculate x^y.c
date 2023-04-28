#include<stdio.h>
void main()
{
    int i,x,y,ans=1;
    printf("Enter the value of base");
    scanf("%d",&x);
    printf("\nEnter the value of power");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
       {
           ans=ans*x;
       }
        printf("\n%d^%d=%d",x,y,ans);
}
