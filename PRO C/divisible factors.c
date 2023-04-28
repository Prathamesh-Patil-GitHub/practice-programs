#include<stdio.h>
void main()
{
    int i,n,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    printf("\nDivisible factors of %d are:",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
          printf("\n%d",i);
          c++;
        }
    }
  printf("\nNumber of divisible factors of %d is %d",n,c);

}
