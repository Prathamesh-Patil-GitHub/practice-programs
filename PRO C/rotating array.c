#include<stdio.h>
void roate_array(int,int,int,int);
void display(int*,int);
void main()
{
    int i,a[8],count,dir;
    printf("Enter 8 numbers");
    for(i=0;i<8;i++)
        scanf("%d",&a[i]);
    printf("\nHow many terms you want to rotate");
    scanf("%d",&count);
    printf("Enter 1 to rotate right and Press 0 to rotate left");
    scanf("%d",&dir);
    rotate_array(a,8,dir,count);
    printf("\n");
    display(a,8);
}
void display(int a[],int N)
{
    int i;
    for(i=0;i<N;i++)
        printf("%d",a[i]);
}
void rotate_array(int a[],int N,int dir,int count)
{
    int i,temp;
    while(count!=0)
    {
        if(dir==1)
        {
            temp=a[N-1];
            for(i=N-1;i>=1;i--)
                a[i]=a[i-1];
            a[0]=temp;
            count--;
        }
        else
        {
            temp=a[0];
            for(i=0;i<=N;i++)
                a[i]=a[i+1];
            a[N-1]=temp;
            count--;
        }
    }
}
