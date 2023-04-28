#include<stdio.h>
void main()
{
    char str1[30],str2[30],str3[60];
    int i;
    printf("Enter the first string");
    gets(str1);
    printf("\nEnter the second string");
    gets(str2);
    strcpy(str3,str1);
    strcat(str3,str2);
    printf("\nThe concatenated string is %s",str3);
    i=strlen(str3);
    printf("\nThe length of concatenated string is %d",i);
    strrev(str3);
    printf("\nThe reverse of concatenated string is %s",str3);

}
