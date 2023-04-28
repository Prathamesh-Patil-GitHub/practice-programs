#include<stdio.h>
void main()
{
    int ch,x,y;
    printf("Menu:");
    printf("\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division");
    printf("\nEnter your choice");
    scanf("%d",&ch);
    if(ch>=1&&ch<=4)
    {
        printf("\nEnter two numbers");
        scanf("%d%d",&x,&y);
    }
    switch(ch)
    {
        case 1:printf("\nAddition is %d",x+y);break;
        case 2:printf("\nSubtraction is %d",x-y);break;
        case 3:printf("\nMultiplication is %d",x*y);break;
        case 4:printf("\nDivision is %f",x/y);break;
        default :break;

    }
    printf("\nThank You!!!");
}
