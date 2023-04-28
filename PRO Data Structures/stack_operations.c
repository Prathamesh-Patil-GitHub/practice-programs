#include<stdio.h>
int stack[5];
int max=5;
int top=-1;

void push();
void pop();
void display();

void main()
{
    int ch;
    do
    {
        printf("~~~MENU~~~");
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
        printf("\n\nEnter your choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();break;
            case 2:pop();break;
            case 3:display();break;
            case 4:break;
            default:printf("\nINVALID INPUT!!!");
        }
        printf("\n\n\n");
    }while(ch!=4);
}

void push()    //PUSH LOGIC
{
    int item;
    if(top==max-1)
        printf("\nSTACK OVERFLOW!!!");
    else
    {
        top++;
        printf("\nEnter the item to Push ");
        scanf("%d",&item);
        stack[top]=item;
        printf("\n%d is pushed in the stack",item);
    }
}
void pop()      //POP LOGIC
{
    if(top==-1)
        printf("\nSTACK UNDERFLOW!!!");
    else
    {
        printf("\n%d is Popped!!!",stack[top]);
        top--;
    }
}
void display()
{
    int i=top;
    if(top==-1)
        printf("\nSTACK IS EMPTY!!!");
    else
    {
         printf("\nTOP =");
        while(i!=-1)
        {
            printf("\t%d\n",stack[i]);
            i--;
        }
    }
}
