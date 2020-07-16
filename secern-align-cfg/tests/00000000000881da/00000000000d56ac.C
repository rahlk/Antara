#include<stdio.h>
#include<stdlib.h>
main()
{
int T,N[101],i,j,size;
char l[101][5000],m[5000];
scanf("%d",&T);
for(i=0;i<T;i++)
{
scanf("%d",&N[i]);
fflush(stdin);
fgets(l[i],5000,stdin);
}
for(i=0;i<T;i++)
{
printf("Case #%d: ",i+1);
for(j=0;j<2*N[i]-2;j++)
{
if(l[i][j]=='E')
	m[j]='S';
else
	m[j]='E';	
}
printf("%s",m);
if(i!=T-1)
printf("\n");
}
}