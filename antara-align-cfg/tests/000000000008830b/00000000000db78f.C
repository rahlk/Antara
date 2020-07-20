#include<stdio.h>
long long int getPrime(long long int num,long long int largest)
{
if(num%2==0) return 2;
long long int y=3;
while(y<largest)
{
if(num%y==0) return y;
y+=2;
}
return y;
}
void sortIt(long long int *x,int size)
{
int e,f,m=size-2,g;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
if(x[e]>x[f])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
++e;
++f;
}
m--;
}
}
int getIndex(long long int key,long long int *arr)
{
int x=0;
while(x<26)
{
if(key==arr[x]) return x;
x++;
}
}
void giveMeFirst(long long int *final,long long int first,long long int second,long long int *codes)
{
long long int g;
int i;
for(i=0;i<26;++i)
{
if(first%codes[i]==0) break;
}
final[0]=codes[i];
final[1]=first/codes[i];
if(second%final[0]==0)
{
g=final[0];
final[0]=final[1];
final[1]=g;
}
}
void insert(long long int value,long long int *codes,int *count)
{
if(*count==26) return;
int x=0;
while(x<*count)
{
if(value==codes[x]) return;
++x;
}
codes[*count]=value;
++(*count);
}
int main()
{
int t,x,y,size,i;
long long int n;
scanf("%d",&t);
y=1;
while(t--)
{
scanf("%lld",&n);
scanf("%d",&size);
char final[size+2];
long long int ct[size],codes[size];
long long int pr,g;
int count=0;
for(i=0;i<size;++i)
{
scanf("%lld",&ct[i]);
}
long long int num;
num=getPrime(ct[0],n);
pr=ct[0]/num;
if(ct[1]%num==0)
{
g=pr;
pr=num;
num=g;
}
insert(num,codes,&count);
for(i=1;i<size;++i)
{
insert(pr,codes,&count);
pr=ct[i]/pr;
}
insert(pr,codes,&count);
sortIt(codes,count);
long long int fi[2];
giveMeFirst(fi,ct[0],ct[1],codes);
count=0;
final[count]=(char)getIndex(fi[0],codes)+65;
pr=fi[1];
for(count=1;count<size;++count)
{
final[count]=(char)getIndex(pr,codes)+65;
pr=ct[count]/pr;
}
final[count]=(char)getIndex(pr,codes)+65;
final[++count]='\0';
printf("Case #%d: %s\n",y,final);
}
return 0;
}