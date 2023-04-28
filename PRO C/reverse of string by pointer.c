#include<stdio.h>
char* reverse(char *);
void main()
{
    char a[20],*p;
    printf("Enter the string");
    gets(a);
    printf("%s",reverse(a));
}
char* reverse(char *p)
{
    int l,i;
    char t;
    for(l=0;*(p+l)='\0';l++);
    for(i=0;i<l/2;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=t;
    }
return (p);
}
