#include<stdio.h>
void main()
{
    int n,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        c++;
        n=n/10;
    }
printf("\nThe number of digits in given number = %d",c);
}
