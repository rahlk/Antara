#include<stdio.h>
#include<string.h>
int main()
{
int testCases,y;
scanf("%d",&testCases);
for(y=1;y<=testCases;++y)
{
int rows,columns;
int i,j;
scanf("%d %d",&rows,&columns);
int arr[rows][columns];
int n=rows*columns;
int azz=0;
for(int x=0;x<rows;++x)
{
for(int w=0;w<columns;++w)
{
for(i=0;i<rows;++i)
{
for(j=0;j<columns;++j) arr[i][j]=0;
}
int all[n][2];
int l=0,hello=0;
all[0][0]=x;
all[0][1]=w;
arr[x][w]=1;
for(int z=0;z<n;++z)
{
int r=all[l][0];
int c=all[l][1];
//printf("Row:%d,Column:%d\n",r,c);
for(i=0;i<rows;++i)
{
if(i==r) continue;
for(j=0;j<columns;++j)
{
if(j==c || arr[i][j]==1 || (i-j)==(r-c) || (i+j)==(r+c)) continue;
//printf("i:%d,j:%d\n",i,j);
all[++l][0]=i;
all[l][1]=j;
arr[i][j]=1;
hello=1;
break;
}
if(hello==1) break;
}
hello=0;
} //z wala for
if(l==(n-1))
{
printf("Case #%d: POSSIBLE\n",y);
for(int a=0;a<=l;++a)
{
printf("%d %d\n",(all[a][0]+1),(all[a][1]+1));
}
azz=1;
break;
}
}
if(azz==1) break;
} //sare conditions wala for
if(azz==0) printf("Case #%d: IMPOSSIBLE\n",y);
} //testcases wala for
return 0;
}