#include<stdio.h>
#include<stdlib.h>
int main()
{
  int T,i,j,k;
  scanf("%d",&T);
for(k=1;k<=T;k++)
{
  int n;
  scanf("%d",&n);
  char path[2*n-2];
scanf("%s",path);
for(j=0;j<(2*n-2);j++)
{
 if(path[j]=='S')
    path[j]='E';
    else
    path[j]='S';
}
printf("\nCase #%d: %s",k,path);
}
return 0;
}
