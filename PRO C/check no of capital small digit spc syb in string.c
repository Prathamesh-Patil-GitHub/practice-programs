#include<stdio.h>
void main()
{
    int i=0,L=0,s=0,d=0,sp=0;
    char str[30];
    printf("Enter the string");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
            L++;
        else
        if(str[i]>='a' && str[i]<='z')
            s++;
        else
        if(str[i]>='0' && str[i]<='9')
            d++;
         else
            sp++;
      i++;
    }
    printf("\nNumber of Capital letter = %d",L);
    printf("\nNumber of small letter = %d",s);
    printf("\nNumber of digits = %d",d);
    printf("\nNumber of special symbols = %d",sp);

}
