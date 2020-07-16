#include<stdio.h>
#include<stdlib.h>
main()
{
int T,N,i,j;
char l[5000],m[101][5000];
scanf("%d",&T);
for(i=0;i<T;i++)
{
scanf("%d",&N);
scanf("%s",l);
for(j=0;j<(2*N-2);j++)
{
if(l[j]=='E')
	m[i][j]='S';
else
	m[i][j]='E';
}
m[i][j]=NULL;
}
for(i=0;i<T;i++)
{
  printf("Case #%d: ",i+1);
  printf("%s",m[i]);
  if(i!=T-1)
  printf("\n");
}
}