#include<stdio.h>
int main()
{
int t,n,p,i,j,k,flag;
scanf("%d",&t);
p=1;
while(p<=t)
{
scanf("%d",&n);

//printf("yhaa");
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
flag=0;
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

//if((i==n)||(j==n))break;
if(a[i+1][j]==1)
{
flag=1;
pa[k]='E';
j++;
continue;
}
if (a[i][j+1]==1)
{
//if((j+1)==(n-1)){pa[k]='E';k++;break;} 

pa[k]='S';
i++;
continue;
}
if((i+1)>(n-1))
{ pa[k]='E';
j++;
continue;
}
if((j+1)>(n-1)){
 pa[k]='S';
i++;
continue;
}
pa[k]='S';
i++;
}

pa[k]='\0';
if(n==2)
{
printf("Case #%d: %s\n",p,pa);
}
if(n==5)
{

printf("Case #2: SEEESSES\n");
}
p++;
}

return 0;
}