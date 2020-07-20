#include<stdio.h>
#include<string.h>
int main()
{
int testCases,y;
scanf("%d",&testCases);
for(y=0;y<testCases;++y)
{
int rows,columns;
int i,j;
scanf("%d %d",&rows,&columns);
int arr[rows][columns];
//memset(arr,rows*columns*sizeof(int),0);
for(i=0;i<rows;++i)
{
for(j=0;j<columns;++j) arr[i][j]=0;
}
int n=rows*columns;
int all[n][2];
int l=0;
all[0][0]=0;
all[0][1]=0;
arr[0][0]=1;
for(int z=0;z<n;++z)
{
int r=all[l][0];
int c=all[l][1];
for(i=0;i<rows;++i)
{
for(j=0;j<columns;++j)
{
if(i==r) break;
if(j==c || arr[i][j]==1 || (i-j)==(r-c) || (i+j)==(r+c)) continue;
all[++l][0]=i;
all[l][1]=j;
arr[i][j]=1;
}
}
}
if(l==(n-1))
{
printf("Case #%d: POSSIBLE\n",y);
for(int a=0;a<=l;++a)
{
printf("%d %d\n",all[a][0],all[a][1]);
}
}
else printf("Case #%d: IMPOSSIBLE\n",y);
}
return 0;
}