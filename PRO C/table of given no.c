#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the number");
    scanf("%d",&n);
    printf("\nTable of %d is:",n);
    for(i=1;i<=10;i++)
        printf("\n%d",i*n);
}
