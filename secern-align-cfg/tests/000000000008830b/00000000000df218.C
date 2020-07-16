#include<stdio.h>
int prime(long long int n)
{long long int i,c=0;
for(i=1;i<=n/2;i++)
if(n%i==0)
c++;
if(c==1)
return 1;
return 0;
}
int main()
{long long int t,t1,n,k,c,c1,i,j,count;
scanf("%lld",&t);t1=1;

while(t1<=t)
{
scanf("%lld%lld",&n,&k);
long long int a[k+10],b[k+10],arr[k+10],p,q;c=0;
if(k>=25&&k<=100)
{for(i=0;i<k;i++)
scanf("%lld",&arr[i]);
printf("Case #%lld: ",t1);

for(i=3;i<=arr[0];i++)
if(prime(i))
 {if(arr[0]%i==0)
  {a[0]=i;b[0]=i;
  a[1]=arr[0]/i;b[1]=arr[0]/i;
  break;}
 }
 
for(i=1;i<k;i++)
{a[i+1]=arr[i]/a[i];
b[i+1]=arr[i]/a[i];}
long long int temp;
for(p=0;p<k;p++)
for(q=p+1;q<k+1;q++)
if(a[p]>a[q])
{
temp=a[p];
a[p]=a[q];
a[q]=temp;
}

for(j=0;j<k+1;j++)
if(a[j]==a[j+1])
a[j]=0;

for(i=0;i<k+1;i++)
{count=0;
    for(j=0;j<k+1;j++)
{
if(b[i]!=a[j])
{if(a[j]!=0)
 count++;
else 
continue;
}
else
{printf("%c",65+count);
break;
}
}
}
printf("\n");
t1++;
}
}
}
 