#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,D;
    float x,y;
    printf("Enter the coefficients of x^2,x and constant term");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-(4*a*c);
    if(D<0)
        printf("\nThe given quadratic equation has imaginary roots");
    if(D==0){
        printf("\nBoth roots are equal");
        x=-b/(2.0*a);
        printf("\nThe root is %f",x);
    }
    if(D>0){
        printf("\nThe given quadratic equation has two roots");
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        printf("\nThe roots are %f and %f",x,y);
    }
}
