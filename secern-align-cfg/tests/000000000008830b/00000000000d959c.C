#include<stdio.h>
#include<malloc.h>
#include<math.h>
int greatestPrime(int n) 
{ 
int maxPrime = -1; 
while (n % 2 == 0) 
{ 
maxPrime = 2; 
n >>=1;
} 
for (int i = 3; i <= n/2; i += 2) 
{ 
while (n % i == 0)
{ 
maxPrime = i; 
n = n / i; 
} 
} 
if (n > 2) 
maxPrime = n; 
return maxPrime; 
}
int* quickSort(int* x,int n)
{
int stack[n][2];
int top,lb,ub,e,f,pp,swap;
top=n;
stack[--top][0]=0;
stack[top][1]=n-1;
while(top!=n)
{
lb=stack[top][0];
ub=stack[top++][1];
e=lb;
f=ub;
while(e<f)
{
for(;e<ub&&x[e]<=x[lb];e++);
for(;x[f]>x[lb];f--);
if(e<f)
{
swap=x[e];
x[e]=x[f];
x[f]=swap;
}
else
{
swap=x[lb];
x[lb]=x[f];
x[f]=swap;
pp=f;
}
}
if(pp+1<ub)
{
stack[--top][0]=pp+1;
stack[top][1]=ub;
}
if(pp-1>lb)
{
stack[--top][0]=lb;
stack[top][1]=pp-1;
}
}
return x;
}
int* removerepeated(int *p,int n)
{
int i,j;
int *t=(int*)malloc(sizeof(int)*26);
for(j=i=0;i<n;i++)
if(p[i]!=p[i+1])t[j++]=p[i];
return t;
}
int main()
{
char ref[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int i,j,k;
scanf("%d",&k);
int n[k],*l[k],s[k],*p,*w,*q;
w=(int*)malloc(sizeof(int)*26);
for(i=0;i<k;++i)
{
scanf("%d",&n[i]);
scanf("%d",&s[i]);
l[i]=(int*)malloc(sizeof(int)*s[i]);
for(j=0;j<s[i];++j)
 scanf("%d",&l[i][j]);
}
for(i=0;i<k;++i)
{
p=(int*)malloc(sizeof(int)*(s[i]+1));
q=(int*)malloc(sizeof(int)*(s[i]+1));

p[1]=greatestPrime(l[i][0]);
p[0]=l[i][0]/p[1];


for(j=2;j<s[i]+1;++j)
 p[j]=l[i][j-1]/p[j-1];

for(int a=0;a<s[i]+1;a++)
q[a]=p[a];


p=quickSort(p,s[i]+1);
p=removerepeated(p,s[i]+1);


printf("Case #%d: ",i+1);
for(int a=0;a<s[i]+1;++a)
{
for(j=0;j<26;++j)
{
if(q[a]==p[j])
 printf("%c",ref[j]);
}
}
printf("\n");
free (p);
free (q);
}
return 0;
}