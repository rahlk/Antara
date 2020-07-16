#include<stdio.h>
#include<stdlib.h>
int main()
{
int t,num,a,b,i,tmp,n,found,l,j;
scanf("%d",&t);
for(j=0;j<t;++j)
{

found=0;
a=0;
b=0;
l=1;
scanf("%d",&num);
tmp=num;
for(n=0;tmp;tmp=tmp/10,++n);

int *e=(int *)malloc(n*sizeof(int));
int *f=(int *)malloc(n*sizeof(int));
for(i=0;i<n;f[i]=0,e[i]=0,++i);
tmp=num;
for(i=0;i<n;++i)
{
e[i]=tmp%10;
tmp=tmp/10;
if(e[i]==4)
{
found=1;
e[i]--;
f[i]++;
}
}

if(found)
{
for(i=0;i<n;++i)
{
a=a+e[i]*l;
b=b+f[i]*l;
l=l*10;
}
}
else
{
a=num-1;
b=1;
}
printf("Case #%d: %d %d\n",j+1,a,b); 
}
return 0;
}