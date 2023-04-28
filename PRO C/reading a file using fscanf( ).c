#include<stdio.h>
void main()
{
    FILE *fp;
    int x,y,z;
    fp=fopen("f1.txt","r");
    fscanf(fp,"%d%d%d",&x,&y,&z);
    printf("x=%d y=%d z=%d",x,y,z);
    fclose(fp);
}
