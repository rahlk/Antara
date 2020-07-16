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

i=0;
j=0;

for(k=0;;k++)
{
flag=0;

if((i==n)||(j==n))break;
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
flag=1;
pa[k]='S';
i++;
continue;
}
if(flag==0) 
{
i++;
j++;
if(i==(n-1)) pa[k]='S';
else pa[k]='E';
k++;
break;
}
}
int m=0;
while(lpa[m]!='\0')
{
m++;
}
if(lpa[m-1]=='S') pa[k-1]='E';
if(lpa[m-1]=='E') pa[k-1]='S';

pa[k]='\0';
printf("Case #%d: %s\n",p,pa);
p++;
}

return 0;
}