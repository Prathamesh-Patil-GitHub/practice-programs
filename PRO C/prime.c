#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
      {
        printf("\n %d is not prime",n);
           break;
      }
    }
    if(i==n)
    printf("\n%d is a Prime number.",n);

}
