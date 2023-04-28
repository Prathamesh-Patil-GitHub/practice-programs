#include<stdio.h>
#include<stdlib.h>
struct Student
{
    char name[30];
    int age;
    char mobile[11];
};
void main()
{
    struct Student *p;

    p=(struct Student *)malloc(sizeof(struct Student));
    printf("\nEnter the Name of the student ");
    gets(p->name);
    printf("\nEnter the Age of the student ");
    scanf("%d",&p->age);
    printf("\nEnter the Mobile No. of the student ");
    fflush(stdin);
    gets(p->mobile);
    printf("\n\n\nNAME:%s",p->name);
    printf("\nAGE:%d",p->age);
    printf("\nMobile:%s",p->mobile);

    free(p);
}
