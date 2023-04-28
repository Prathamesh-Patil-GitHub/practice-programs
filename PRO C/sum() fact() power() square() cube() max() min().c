#include<stdio.h>
void power();
void sum();
void fact();
void square();
void cube();
void max();
void min();
void main()
{
    int ch;
    printf("\t\t\t\t\t!!!WELCOME TO PRO SERVICES!!!");
    do
    {
        printf("\nEnter your choice");
        printf("\n1) Sum\n2) Power\n3) Factorial\n4) Square\n5) Cube\n6) Maximum\n7) Minimum\n8) Exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:sum();break;
            case 2:power();break;
            case 3:fact();break;
            case 4:square();break;
            case 5:cube();break;
            case 6:max();break;
            case 7:min();break;
            case 8:break;
            default :printf("\nCan't you see the menu you blindass");break;
        }
    }while(ch!=8);
printf("\nThank You!!!");
}
void sum()
{
    int x,y;
    printf("\nEnter two numbers");
    scanf("%d%d",&x,&y);
    printf("\nThe summation of %d and %d is %d",x,y,x+y);
}
void fact()
{
    int n,i,fact=1;
    printf("\nEnter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
printf("\nThe factorial of %d is %d",n,fact);
}
void power()
{
 int i,x,y,pow=1;
 printf("\nEnter the base number");
 scanf("%d",&x);
 printf("\nEnter the index number");
 scanf("%d",&y);
 for(i=1;i<=y;i++)
 {
     pow=pow*x;
 }
 printf("\n%d ^ %d = %d",x,y,pow);
}
void square()
{
    int n;
    printf("\nEnter the number");
    scanf("%d",&n);
    printf("\nThe square of %d is %d",n,n*n);
}
void cube()
{
    int n;
    printf("\nEnter the number");
    scanf("%d",&n);
    printf("\nThe cube of %d is %d",n,n*n*n);
}
void max()
{
    int a[10],i,max=0;
    printf("\nEnter 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
            max=a[i];
    }
    printf("\nThe maximum number in given numbers is %d",max);
}
void min()
{
    int a[10],i,min;
    printf("\nEnter 10 numbers");
    for(i=0;i<10;i++)
       scanf("%d",&a[i]);
    min=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("\nMinimum number in given numbers is %d",min);
}
