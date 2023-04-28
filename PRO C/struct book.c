#include<stdio.h>
#include<conio.h>
struct book input();
void display(struct book);
struct book
{
    int bookid;
    char bookname[20];
    float price;
};
void main()
{
    struct book b1;
     b1=input();
     display(b1);
}
struct book input()
{
    struct book b;
    printf("Enter the Book ID, Book Name, Book Price");
    scanf("%d",&b.bookid);
    fflush(stdin);
    gets(b.bookname);
    scanf("%f",&b.price);
    return(b);
}
void display(struct book b)
{
    printf("\n Book ID: %d\n Book Name: %s\n Book Price: %f ",b.bookid,b.bookname,b.price);
}
