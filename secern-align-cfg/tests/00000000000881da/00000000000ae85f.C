#include<stdio.h>
int i,j;
void main()
{
  int T;
  scanf("%d",&T);
  for(i=0;i<T;i++)
  {
  int n;
  scanf("%d",&n);
char path[2*(n-1)];
scanf("%[^\n]s",path);
for(j=0;j<2*(n-1);j++)
{
 if(path[j]=='S')
    path[j]='E';
    else
    path[j]='S';
    }
    printf("%s",path);
    }
    }
  