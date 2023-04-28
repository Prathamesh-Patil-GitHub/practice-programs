#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#define MAX 5

int Q[MAX],front=-1,rear=-1;    //Global Declaration
void ENQUEUE();
void DEQUEUE();
void TRAVERSE();

void main()
{
    int ch;
    do
    {
        printf("\n%%%%%MENU%%%%%");
        printf("\n1.Enqueue\n2.Dequeue\n3.Traverse\n4.Exit");
        printf("\nENTER YOUR CHOICE:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:ENQUEUE();break;
            case 2:DEQUEUE();break;
            case 3:TRAVERSE();break;
            case 4:printf("\nThank You For Interacting With US :)");break;
            default:printf("\nPlease Enter A VALID choice");
        }
        getch();
        system("cls");
    }while(ch!=4);
}
void ENQUEUE()      //Enqueue Logic
{
    int item;
    if(rear==MAX-1)
    {
        printf("\nQUEUE OVERFLOW!!!");
    }
    else
    {
        printf("\nWhich element do you want to insert?");
        scanf("%d",&item);
        if(front==-1)
            rear=front=0;
        else
            rear++;
        Q[rear]=item;
        printf("\n%d is Enqueued!",item);
    }
}
void DEQUEUE()     //Dequeue Logic
{
    int item;
    if(front==-1)
        printf("\nQUEUE UNDERFLOW!!!");
    else
    {
        item=Q[front];
        printf("\n%d is Dequeued from the queue",Q[front]);
        if(front==rear)
            front=rear=-1;
        else
            front++;
    }
}
void TRAVERSE()     //Traverse Logic
{
    int i=front;
    if(front==-1)
        printf("\nQUEUE IS EMPTY!!!");
    else
    {
        printf("\nThe Queue is:\n");
        while(i<=rear)
        {
            printf("\t%d",Q[i]);
            i++;
        }
    }
}
