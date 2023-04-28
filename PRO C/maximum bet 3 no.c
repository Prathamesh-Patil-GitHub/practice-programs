#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter three number");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        if(x>z)
            printf("\nThe number %d is maximum",x);
        else
            printf("\nThe number %d is maximum",z);
    }
    if(y>x)
    {
        if(y>z)
            printf("\nThe number %d is maximum",y);
        else
            printf("\nThe number %d is maximum",z);
    }
}
