#include<stdio.h>
void main()
{
    int i;
    printf("The numbers divisible by 7 bet. 100 to 200 are:");
    for(i=100;i<=200;i++)
    {
        if(i%7==0)
            printf("\n%d",i);
    }
}
