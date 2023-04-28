#include<stdio.h>
void main()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    if(x%2==0)
        printf("\nThe number %d is even number",x);
    else
        printf("\ntThe number %d is odd number",x);
}
