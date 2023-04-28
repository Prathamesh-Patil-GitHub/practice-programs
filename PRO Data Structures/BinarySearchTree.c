#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *left,*right;
};
struct node *root=NULL;
void create();
void preorder(struct node*);
void inorder(struct node*);
void postorder(struct node*);

int main()
{
    int ch;
    do
    {
        printf("\nMENU\n");
        printf("\n1. Create\n2. Pre-order Traversing \n3. In-order Traversing\n4. Post-order Traversing\n5. Exit ");
        printf("\nEnter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();break;
            case 2:printf("\nPre-order is:\n");
                preorder(root);break;
            case 3:printf("\nIn-order is:\n");
                inorder(root);break;
            case 4:printf("\nPost-order is:\n");
                postorder(root);break;
            case 5:printf("\nGB");break;
            default:printf("\nWRONG CHOICE!!!");
        }
    }while(ch!=5);
    return 0;
}

void create()
{
    struct node *n,*p,*t;
    int item;
    char ch;
    do
    {
        printf("\nEnter the Number ");
        scanf("%d",&item);
        p=NULL;
        t=root;
        while(t!=NULL)
        {
            p=t;
            if(item< t->info)
                t=t->left;
            else
                t=t->right;
        }
        n=(struct node*)malloc(sizeof(struct node));
        n->info=item;
        n->left=NULL;
        n->right=NULL;
        if(root==NULL)
            root=n;
        else
            if(item< p->info)
                p->left=n;
        else
            p->right=n;
        printf("\n%d is inserted in the BST ",item);
        printf("\nWanna add another?(y/n)");
        ch=getche();
    }while(ch=='y'||ch=='Y');
}
void preorder(struct node *t)
{
    if(t!=NULL)
    {
        printf("\t%d",t->info);
        preorder(t->left);
        preorder(t->right);
    }
}
void inorder(struct node *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        printf("\t%d",t->info);
        inorder(t->right);
    }
}
void postorder(struct node *t)
{
    if(t!=NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("\t%d",t->info);
    }
}
