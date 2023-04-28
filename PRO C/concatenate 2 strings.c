#include<stdio.h>
void main()
{
   char str1[30],str2[30],str3[60];
   int i=0,j=0;
   printf("Enter the first string");
   gets(str1);
   printf("\nEnter the second string");
   gets(str2);
   while(str1[i]!='\0')
   {
       str3[j]=str1[i];
       i++;
       j++;
   }
   i=0;
   while(str2[i]!='\0')
   {
       str3[j]=str2[i];
       i++;
       j++;
   }
   str3[j]='\0';
   printf("\nThe concatenated string is %s",str3);
}
