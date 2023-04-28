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
    fp=fopen("myfile.txt","rb");
    if(fp==NULL)
    {
        printf("File Not Found");
        exit(1);
    }
    while(fread(&b1,sizeof(b1),1,fp)!=0)
    {
        printf("BookID:%d\nTitle:%s\nPrice:%f\n\n",b1.bookid,b1.title,b1.price);
    }
    fclose(fp);
}
