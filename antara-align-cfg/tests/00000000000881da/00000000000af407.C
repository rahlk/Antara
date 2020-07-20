#include<stdio.h>
void main()
{
  int T,i,j,k;
  scanf("%d",&T);
  for(i=0;i<T;i++)
  {
  int n;
  scanf("%d",&n);
char path[2*(n-1)];
for(k=0;k<2*n-2;k++)
scanf("%c",path[k]);
for(j=0;j<2*(n-1);j++)
{
 if(path[j]=='S')
    path[j]='E';
    else
    path[j]='S';
    printf("%c",path[j]);
}
  }   
}
  