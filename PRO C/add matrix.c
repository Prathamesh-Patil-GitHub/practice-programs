#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],s[3][3],i,j;
    printf("Enter the first matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
          scanf("%d",&a[i][j]);
    }
    printf("\nEnter the second matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
            s[i][j]=a[i][j]+b[i][j];
        }
    }
printf("\nThe addition of given matrices is \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
        printf("%d ",s[i][j]);
printf("\n");
}

}
