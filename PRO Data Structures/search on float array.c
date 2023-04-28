#include<stdio.h>
void main()
{
    float a[7]={1.1,1.2,2.1,2.2,1.1,3.1,1.1};
    int i,n=7,count=0;
    float item;
    printf("\nArray elements are...\n");
    for(i=0;i<n;i++)
        printf("%0.3f\t",a[i]);
    printf("\nEnter the float value you want to search");
    scanf("%f",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            printf("\n%f is found at %d index",item,i);
            count++;
        }
    }
    if(count==0)
        printf("\n%f is not found in the array",item);
    else
        printf("\n%f is found %d times in the array",item,count);
}
