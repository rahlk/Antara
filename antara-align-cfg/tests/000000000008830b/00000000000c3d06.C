#include<stdio.h>
int main()
{
int t,i,n,len,j,pmi,k,item,a,b,s,y;
int text[102];
int prime[27];
char c;
scanf("%d",&t);
for(i=1;i<=t;++i)
{
scanf("%d %d",&n,&len);
scanf("%d",&item);
a=3;
while(1)
{
if(item%a==0)
{
b=item/a;
break;
}
while(1)
{
++a;
for(y=2;y<=a/2;++y) if(a%y==0) break;
if(y>a/2) break;
}
}
prime[0]=a;
text[0]=a;
prime[1]=b;
text[1]=b;
a=b;
pmi=1;
for(j=2;j<=len;++j)
{
scanf("%d",&item);
if(item%a!=0)
{
}
a=item/a;
text[j]=a;
for(k=0;k<=pmi;++k)
{
if(prime[k]==a) break;
if(prime[k]>a)
{
for(s=pmi;s>=k;--s) prime[s+1]=prime[s];
prime[k]=a;
++pmi;
break;
}
}
if(k==pmi+1)
{
prime[k]=a;
++pmi;
}
}
printf("Case #%d: ",i);
for(j=0;j<=len;++j)
{
for(k=0;k<26;++k){ if(text[j]==prime[k]) {c=k+65;break;}}
printf("%c",c);
}
printf("\n");
}
return 0;
}