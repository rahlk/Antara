#include<stdio.h>
#include<malloc.h>
int prime(int num)
{
for(int i=2;i<=num/2;i++)
if(num%i==0)return -1;
return 1;
}
void gpf(int num,int *f1)
{
int i;
for(i=3;i<=num/2;i++)
{
if(prime(i)==1&&num%i==0)
{
*f1=i;
break;
}
}
}
int main()
{
char ref[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int ref1[26];
int k,m,i,j,f1,f2;
scanf("%d",&k);
int *l[k],s[k];
for(i=0;i<k;++i)
{
scanf("%d",&m);
scanf("%d",&m);
s[i]=m;
l[i]=(int*)malloc(sizeof(int)*m);
for(j=0;j<m;++j)
scanf("%d",&l[i][j]);
}
for(int z=0;z<k;z++)
{
for(j=0,i=3;j<=25;i+=2)
if(prime(i)==1)
{
ref1[j]=i;
j++;
}
gpf(l[z][0],&f1);
for(int t=0;t<26;t++)
if(f1==ref1[t])printf("%c",ref[t]);

for(int p=0;p<s[z];p++)
{
f2=l[z][p]/f1;
for(int t=0;t<26;t++)
if(f2==ref1[t])printf("%c",ref[t]);
f1=f2;
}
}
return 0;
}
 