#include<stdio.h>
struct BOOK
{
    int bookid;
    char title[30];
    float price;
};
void main()
{
    struct BOOK b1;
    FILE *fp;
    fp=fopen("myfile.txt","ab");
    printf("Enter the Book ID, Title & Price");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.title);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
}
