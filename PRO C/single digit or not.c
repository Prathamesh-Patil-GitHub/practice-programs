#include<stdio.h>
void main()
{
    int i;
    printf("Enter the number");
    scanf("%d",&i);
    if(i<10&&i>-10)
        printf("\nThe number %d is a single digit number",i);
    else
        printf("\nThe number %d is not a single digit number",i);
}
