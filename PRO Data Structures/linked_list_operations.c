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
    struct node *p;
    p=start;
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->link;
    }
    return count;
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
        while(p!=NULL)
        {
            pos++;
            if(p->data==item)
                break;
            p=p->link;
        }
        if(p==NULL)
            printf("\n%d is not found :(",item);
        else
            printf("\n%d is found at %d position",item,pos);
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
        while(p!=NULL)
        {
            printf("%d\t",p->data);
            p=p->link;
        }
    }
}//End of Display()

void Insert()
{
    struct node *p,*n;
    int pos,i;
    printf("\nEnter the position (Starting from 1): ");
    scanf("%d",&pos);       //Position indexing starts from 1
    if(pos<=Length()+1 && pos>0)
    {
        n=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the Element ");
        scanf("%d",&n->data);
        if(pos==1)
        {
            n->link=start;
            start=n;
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
        if(pos==1)
        {
            n=start;
            start=start->link;
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
