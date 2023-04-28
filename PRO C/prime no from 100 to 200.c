#include<stdio.h>
void main()
{
    int n,i;
    for(n=100;n<=200;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                break;
        }
    if(i==n)
        printf("%d\n",n);
    }
}
