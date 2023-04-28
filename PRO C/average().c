#include<stdio.h>
float average(int,int,int);
void main()
{
    int x,y,z;
    float avg;
    printf("Enter three numbers");
    scanf("%d%d%d",&x,&y,&z);
    avg=average(x,y,z);
    printf("\nThe average of numbers %d, %d & %d is %f",x,y,z,avg);
}
float average(int x,int y,int z)
{
    float avg=(x+y+z)/3.0;
    return (avg);
}
