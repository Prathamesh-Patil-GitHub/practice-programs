#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Node of the Linked List
struct node{
    int data;
    struct node *link;
};
struct node *start=NULL;
void main()
{
    struct node *p,*n;
    char ch;
    //Adding elements in the List
    do{
        n=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the number ");
        scanf("%d",&n->data);
        n->link=NULL;
        if(start==NULL)
        {
            start=n;
            p=n;
        }
        else
        {
            p->link=n;
            p=n;
        }
        printf("\nElement Inserted In the List ");
        printf("\nWanna add another (Y/N) ");
        ch=getch();
    }while(ch=='Y'||ch=='y');

    //Traversing the List
    printf("\n\nThe Linked List is as follows:\n\n");
    p=start;
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->link;
    }
}//end of main()
