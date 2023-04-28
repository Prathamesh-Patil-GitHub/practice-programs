#include<stdio.h>
void main()
{
    int n1,n2,n3,i=1;
    printf("Enter three numbers");
    scanf("%d%d%d",&n1,&n2,&n3);
    while(1)
    {
        if(i%n1==0 && i%n2==0 && i%n3==0)
            break;
        i++;
    }
    printf("\nThe LCM of %d, %d and %d is %d",n1,n2,n3,i);
    i=(n1>n2)?(n1>n3)?n1:n3:(n2>n3)?n2:n3;
    while(1)
    {
        if(n1%i==0 && n2%i==0 && n3%i==0)
            break;
        i--;
    }
    printf("\n\nHCF of %d, %d and %d is %d",n1,n2,n3,i);
}
