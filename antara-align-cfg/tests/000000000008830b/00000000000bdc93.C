#include<stdio.h>
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
int isPrime(long long int n)
{
int found=1;
int y=2;
while(y<n/2)
{
if(n%y==0)
{
found=0;
break;
}
y++;
}
return found;
}
long long int nextPrime(long long int current)
{
while(current>1)
{
if(isPrime(current)) break;
current--;
}
if(current<=1) return 0;
return current;
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
long long int pr;
int count=0;
for(i=0;i<size;++i)
{
scanf("%lld",&ct[i]);
}
long long int num;
num=n;
for(i=0;i<size;++i)
{
n=num;
while(1)
{
pr=nextPrime(n);
if(pr==0) break;
if(ct[i]%pr==0 )
{
insert(pr,codes,&count);
break;
}
n=pr;
n-=2;
if(n==1) n=2;
}
if(pr!=0) insert(ct[i]/pr,codes,&count);
}
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
final[count]='\0';
printf("Case #%d: %s\n",y,final);
}
return 0;
}