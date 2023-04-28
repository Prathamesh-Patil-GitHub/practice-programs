#include<stdio.h>
void main()
{
    float l,b,a,p;
    printf("Enter the length of the rectangle");
    scanf("%f",&l);
    printf("\nEnter the breadth of the rectangle");
    scanf("%f",&b);
    a=l*b;
    p=2*(l+b);
    printf("\n The area of rectangle is %f",a);
    printf("\n The perimeter of the rectangle is %f",p);

}
