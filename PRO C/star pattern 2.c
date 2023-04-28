#include<stdio.h>
void main()
{
    int i,j,k=1;
    printf("The required pattern is: \n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=i+4 && j>=6-i && k)
                {
                    printf("*");
                    k=0;
                }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}
