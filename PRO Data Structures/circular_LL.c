#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *start=NULL;
void Insert();
void Delete();
void Search();
void Display();
int Length();

void main()
{
    int ch;
    do
    {
        printf("\n\n\n\n*****MENU*****");
        printf("\n1 Insert \n2 Delete \n3 Display \n4 Search \n5 Exit");
        printf("\nChoice= ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:Insert();break;
            case 2:Delete();break;
            case 3:Display();break;
            case 4:Search();break;
            case 5:printf("\nThank you for interacting with us!!!");break;
            default :printf("\nEnter a valid choice!!!");
        }
    }while(ch!=5);
}//End of main()

int Length()
{
    struct node *p=start;
    int count=0;
    if(start==NULL)
        return 0;
    else{
        do
        {
            count++;
            p=p->link;
        }while(p!=start);
    return count;
    }
}//End of Length

void Search()
{
    struct node *p=start;
    int item,pos=0;
    if(start==NULL)
        printf("\nList is Empty! :(");
    else
    {
        printf("\nEnter the item to search ");
        scanf("%d",&item);
        do
        {
            pos++;
            if(p->data==item)
            {
                printf("\n%d is found at %d position",item,pos);
                return;
            }
            p=p->link;
        }while(p!=start);
        printf("\n%d is not found :(",item);

    }
}//End of Search

void Display()
{
    struct node *p;
    if(start==NULL)
        printf("\nLink Is Empty!!!");
    else
    {
        printf("\nThe List is: \n");
        p=start;
        do
        {
            printf("%d\t",p->data);
            p=p->link;
        }while(p!=start);
    }
}//End of Display()

void Insert()
{
    struct node *p,*n;
    int pos,i;
    printf("\nEnter the position (Starting from 1): ");
    scanf("%d",&pos);
    if(pos<=Length()+1 && pos>0)
    {
        n=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the Element ");
        scanf("%d",&n->data);
        if(start==NULL)
        {
            start=n;
            start->link=start;
        }
        else if(pos==1)
        {
            p=start;
            while(p->link!=start)
                p=p->link;
            n->link=start;
            start=n;
            p->link=start;
        }
        else
        {
            p=start;
            for(i=1;i<pos-1;i++)
                p=p->link;
            n->link=p->link;
            p->link=n;
        }
        printf("\n%d is inserted at %d position!!!",n->data,pos);
    }
    else
        printf("\nInvalid Position!!! :(");
}//End of Insert()

void Delete()
{
    struct node *p,*n;
    int i,pos;
    if(start==NULL)
        printf("\nUNDERFLOW!");
    else
    {
        printf("\nEnter the position ");
        scanf("%d",&pos);
        if(pos<=Length())
        {
        if(Length()==1)
        {
            n=start;
            start=NULL;
            printf("\n%d is deleted from the list",n->data);
            free(n);
        }
        else if(pos==1)
        {
            p=n=start;
            while(p->link!=start)
                p=p->link;
            start=start->link;
            p->link=start;
            printf("\n%d is deleted from list",n->data);
            free(n);
        }
        else
        {
            p=start;
            for(i=1;i<pos-1;i++)
                p=p->link;
            n=p->link;
            p->link=n->link;
            printf("\n%d is deleted from the list",n->data);
            free(n);
        }
        }
        else
            printf("\nEnter valid position!");
    }
}//End of Delete()
