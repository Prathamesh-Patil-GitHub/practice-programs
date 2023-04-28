#include<stdio.h>
void main()
{
    int i,esum=0,oddsum=0;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
            esum=esum+i;
        else
            oddsum=oddsum+i;
    }
    printf("\nThe addition of even numbers from 1 to 100 is %d",esum);
    printf("\nThe addition of odd numbers from 1 to 100 is %d",oddsum);
}
