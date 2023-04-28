#include<stdio.h>
void main()
{
  FILE *fp;
  int x,y,z;
  fp=fopen("f1.txt","w");
  printf("Enter three numbers");
  scanf("%d%d%d",&x,&y,&z);
  fprintf(fp,"%d\n%d\n%d",x,y,z);
  fclose(fp);
}
