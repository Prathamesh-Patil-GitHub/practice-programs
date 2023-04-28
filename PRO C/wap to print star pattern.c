#include<stdio.h>
void main()
{
    int m,n;
    for(m=1;m<=5;m++)
    {
        for(n=1;n<=m;n++)
            printf("\t*");
    printf("\n");
    }
    for(m=4;m>=1;m--)
    {
        for(n=1;n<=m;n++)
            printf("\t*");
       printf("\n");
    }
}
