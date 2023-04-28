#include<stdio.h>
void main()
{
   int a[3][3],i,j,sum=0;
    printf("Enter the matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            if(i!=j && i+j!=2)
                sum=sum+a[i][j];
        }
    }
    printf("\nThe addition of non diagonal elements of the matrix is %d",sum);
}
