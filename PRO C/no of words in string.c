#include<stdio.h>
int main()
{
    int i=0,c=0;
    char str[30];
    printf("Enter the string:");
    gets(str);
    if (str[0]!='\0')
    {
        c++;
        while(str[i]!='\0')
        {
            if(str[i]==' ')
                c++;
            i++;
        }
    }
    printf("\nThe number of words in the given string is %d",c);
    return 0;
}
