#include<stdio.h>
float area(float);
void main()
{
    float radius,a;
    printf("Enter the radius");
    scanf("%f",&radius);
    a=area(radius);
    printf("\nThe area of the circle is %f",a);
}
float area(float r)
{
    float a=3.14*r*r;
    return a;
}
