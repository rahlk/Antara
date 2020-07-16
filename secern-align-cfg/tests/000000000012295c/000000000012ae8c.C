#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
int i;
for(i=1;i<=t;i++)
{
int p,q;
scanf("%d %d",&p,&q);
int a[p][2];
char d[p];
int j,k,l;
for(j=0;j<p;j++)
scanf("%d %d %c",&a[j][0],&a[j][1],&d[j]);
int b[q+1][q+1];
for(j=0;j<=q;j++)//x
{
for(k=0;k<=q;k++)//y
{
b[j][k]=0;
}
}
for(j=0;j<=q;j++)//x
{
for(k=0;k<=q;k++)//y
{
for(l=0;l<p;l++)//person
{
//if(a[l][0]==j&&a[l][1]==k)
//b[j][k]++;
if((a[l][0]<j&&d[l]=='E')||(a[l][0]>j&&d[l]=='W')||(a[l][1]<k&&d[l]=='N')||(a[l][1]>k&&d[l]=='S'))
b[j][k]++;
}
}
}
int max=0;
for(j=0;j<=q;j++)//x
{
for(k=0;k<=q;k++)//y
{
if(b[j][k]>max)
max=b[j][k];
}
}
for(j=0;j<=q;j++)//x
{
for(k=0;k<=q;k++)//y
{
if(b[j][k]==max)
{
    printf("Case #%d: %d %d\n",i,j,k);
    k=j=2*q+1;
}
}
}
for(j=0;j<=q;j++)//x
{
for(k=0;k<=q;k++)//y
{
printf("%d",b[j][k]);
}
printf("\n");
}
}
return 0;
}

