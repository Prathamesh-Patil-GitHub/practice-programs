#include<stdio.h>
int a[20],n=10;

void TRAVERSE();
void INSERT();
void DELETE();
void SEARCH();
void ASORT();
void DSORT();
void main()
{
    int ch;
    int i;
        printf("\nEnter 10 numbers for the array \n");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
    do
    {
        printf("\n\n\n");
        printf("\n***MENU***\n\n1.See Array\n\n2.Insert Element\n\n3.Delete Element\n\n4.Search\n\n5.Ascending Sort\n\n6.Descending Sort\n\n7.EXIT\n\nCHOICE:");
        scanf("%d",&ch);
        if(ch==1)
            TRAVERSE();
        else
            if(ch==2)
            {
                TRAVERSE();
                INSERT();
                TRAVERSE();
            }
        else
            if(ch==3)
            {
                TRAVERSE();
                DELETE();
                TRAVERSE();
            }
        else if(ch==4)
        {
            SEARCH();
        }
        else if(ch==5)
        {
            TRAVERSE();
            ASORT();
            printf("\n\nAfter Sorting\n");
            TRAVERSE();
        }
        else if(ch==6)
        {
            TRAVERSE();
            DSORT();
            printf("\n\nAfter Sorting\n");
            TRAVERSE();
        }
        else
            if(ch==7)
            printf("\nGOOD BYE");
        else
            printf("\nINVALID INPUT");
    }while(ch!=7);
}

void TRAVERSE()     //TRAVERSE LOGIC
{
    int i=0;
    printf("\n");
    while(i<n)
    {
        printf("%d\t",a[i]);
        i++;
    }
}

void INSERT()       //INSERT LOGIC
{
    int pos,item,i;
    printf("\nWhich Element do you want to insert?");
    scanf("%d",&item);
    printf("\nAt which position(Starts from 0)");
    scanf("%d",&pos);
    i=n-1;
    while(i>=pos)
    {
        a[i+1]=a[i];
        i--;
    }
    a[pos]=item;
    n=n+1;
}

void DELETE()       //DELETE LOGIC
{
    int i,pos;
    printf("\nOn which position is the number you want to delete(starts from 0)");
    scanf("%d",&pos);
    i=pos;
    while(i<n)
    {
        a[i]=a[i+1];
        i++;
    }
    n=n-1;
}
void SEARCH()       //SEARCH LOGIC
{
    int item,i,pos,count=0;
    printf("\nEnter the integer to search ");
    scanf("%d",&item);
    for(pos=0;pos<n;pos++)
    {
        if(a[pos]==item)
        {
            printf("\n%d is found at %d index",item,pos);
            count++;
        }
    }
    if(count==0)
        printf("\n%d is not found in the array",item);
    else
        printf("\n%d is found %d time(s) in the array",item,count);
}
void ASORT()        //ASCENDING SORT LOGIC
{
    int i,k,temp;
    for(k=1;k<=n-1;k++)
    {
        for(i=0;i<n-k;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }//End of inner loop
    }//End of outer loop
}

void DSORT()        //DESCENDING SORT LOGIC
{
    int i,k,temp;
    for(k=1;k<=n-1;k++)
    {
        for(i=0;i<n-k;i++)
        {
            if(a[i]<a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }//End of inner loop
    }//End of outer loop
}



