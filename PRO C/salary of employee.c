#include<stdio.h>
void main()
{
    int bs,hra,da;
    printf("Enter the basic salary of the employee");
    scanf("%d",&bs);
    if(bs<5000)
    {hra=bs*0.10;
    da=bs*0.25;
    }
    else
    {
        hra=bs*0.20;
        da=bs*0.50;
    }
    printf("\nThe total salary is %d.",bs+hra+da);
}
