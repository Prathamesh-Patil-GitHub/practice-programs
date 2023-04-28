#include<stdio.h>
void main()
{
    int bill;
    printf("Enter the bill");
    scanf("%d",&bill);
    if(bill>2000)
        bill=bill-500;
    printf("\nTotal bill is %d",bill);
}
