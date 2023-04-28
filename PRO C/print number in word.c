#include<stdio.h>
void main()
{
    int a[10],r,i=0,n;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        a[i]=r;
        n=n/10;
        i++;
    }
    i--;
    printf("\n");
    while(i>=0)
    {
        switch(a[i])
    {
        case 1:printf("One ");break;
        case 2:printf("Two ");break;
        case 3:printf("Three ");break;
        case 4:printf("Four ");break;
        case 5:printf("Five ");break;
        case 6:printf("Six ");break;
        case 7:printf("Seven ");break;
        case 8:printf("Eight ");break;
        case 9:printf("Nine ");break;
        case 0:printf("Zero ");break;
    }
    i--;
    }
}
