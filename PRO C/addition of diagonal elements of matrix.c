#include<stdio.h>
void main()
{
    int a[3][3],i,j,sum1=0,sum2=0;
    printf("Enter the values of the matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
                sum1=sum1+a[i][j];
            if(i+j==2)
                sum2=sum2+a[i][j];
        }
    }
    printf("\nThe sum of elements of first diagonal is %d",sum1);
    printf("\nThe sum of elements of second diagonal is %d",sum2);
}
