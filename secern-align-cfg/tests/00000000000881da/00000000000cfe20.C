#include<stdio.h>
int main()
{
int t,n,p,i,j,k,flag;
scanf("%d",&t);
p=1;
while(p<=t)
{
scanf("%d",&n);
int a[n][n];
char pa[2*n-2],lpa[2*n-2];
scanf("%s",lpa);
i=0;j=0;
for(int k=0;lpa[k]!='\0';k++)
{
if(lpa[k]=='S')
{
a[i+1][j]=1;
i++;
}
else
{
a[i][j+1]=1;
j++;
}
}
a[n-1][n-1]=-1;
i=0;
j=0;
for(k=0;;k++)
{
if(a[i+1][j]==-1){
pa[k]='S';
k++;
break;
}
if(a[i][j+1]==-1){
pa[k]='E';
k++;
break;
}
if(a[i+1][j]==1)
{
if(a[i+2][j]==1 || (i+1)==(n-1))
{
pa[k]='E';
j++;
}
else
{
pa[k]='S';
i++;
}
continue;
}
if (a[i][j+1]==1)
{
if(a[i][j+2]==1 || (j+1)==(n-1))
{
pa[k]='S';
i++;
}
else
{
pa[k]='E';
j++;
}
continue;
}
if(j==n-2)
{
pa[k]='S';
i++;
continue;
}
pa[k]='E';
j++;
}
pa[k]='\0';
printf("Case #%d: %s\n",p,pa);
p++;
}
return 0;
}