#include<stdio.h>
void input(int *);
void display(int *);
void sort(int *);
void main()
{
    int a[5];
    printf("Enter 5 numbers");
    input(a);
    printf("\nAfter sorting");
    sort(a);
    display(a);
}
void input(int *p)
{
    int i;
    for(i=0;i<5;i++)
        scanf("%d",(p+i));
}
void display(int *p)
{
    int i;
    for(i=0;i<5;i++)
        printf("\n%d",*(p+i));
}
void sort(int *p)
{
    int t,round,i;
    for(round=1;round<5;round++)
    {
        for(i=0;i<=3;i++)
        {
            if((*p+i)>*(p+i+1))
           {
            t=*(p+i);
            *(p+i)=*(p+i+1);
            *(p+i+1)=t;
           }
        }
    }
}
