#include<stdio.h>
void main()
{
    int a[10],i,max=0,min;
    printf("Enter 10 numbers");
    for(i=0;i<10;i++)
    {
         scanf("%d",&a[i]);
         if(a[i]>max)
                max=a[i];
    }
   min=a[0];
   for(i=0;i<10;i++)
   {
        if(a[i]<min)
                min=a[i];
   }
printf("\n%d is maximum",max);
printf("\n%d is minimum",min);
}
