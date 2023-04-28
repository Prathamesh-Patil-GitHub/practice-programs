#include<stdio.h>

void main(int argc, char *argv[])
{
    int n=0,sum=0,i;
    for(i=1;i<=argc;i++)
    {
        n=(int)argv[i];
        sum=sum+n;
    }
    printf("%d",sum);
}
