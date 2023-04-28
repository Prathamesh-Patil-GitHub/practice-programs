#include<stdio.h>
void main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter the values of matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("\nThe addition of all elements of the given matrix is %d & average is %0.3f",sum,sum/9.0);
}
