#include<stdio.h>
void main()
{
    int n=1,i,c=0;
    printf("First 50 prime numbers are:");
    while(c!=50)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                break;
        }
        if(i==n)
            {
            printf("\n%d",n);
            c++;
            }
    n++;


    }
}
