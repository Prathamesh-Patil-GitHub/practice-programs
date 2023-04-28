#include<stdio.h>
void main()
{
    char ch;
    FILE *fp;
    fp=fopen("ff.memo","rb");
    while(fread(&ch,sizeof(ch),1,fp)>0)
          {
              fprintf(fp,"%c",ch);
          }
    fclose(fp);
}
