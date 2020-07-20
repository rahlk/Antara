#include<stdio.h>
#include<stdlib.h>
int main()
{
  int T,i,j,k;
  scanf("%d",&T);
  
for(k=0;k<T;k++)
{
  int n;
  scanf("%d",&n);
  char path[2*n-2];
scanf("%s",path);
printf("Case #%d ",k+1);
for(j=0;j<(2*n-2);j++)
{
 if(path[j]=='S')
    path[j]='E';
    else
    path[j]='S';
    printf("%c",path[j]);
}

  return 0;
}
}
