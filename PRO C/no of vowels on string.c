#include<stdio.h>
void main()
{
    char str[30],i,c;
    printf("Enter the string");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
            c++;
            i++;
    }
printf("\nNumber of vowels is %d",c);
}
