#include<stdio.h>
void main()
{
    int i;
    printf("Enter the percentage of the student");
    scanf("%d",&i);
    if(i<35)
        printf("\nThe student has failed");
    else
        if(i<40)
            printf("\nThe student is in third class");
    else
        if(i<60)
        printf("\nThe student is in second class");
    else
        if(i<75)
        printf("\nThe student is in first class");
    else
        printf("\nThe student is in distinction");
}
