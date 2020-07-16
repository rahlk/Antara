#include<stdio.h>
#include<math.h>
long long int length(long long int n)
{
long long int r;
long long int count=0;
while(n>0)
{
r=n%10;
count++;
n=n/10;
}
return count;
}
int main()
{
int t,i,flag=0;
double n;
scanf("%d",&t);
while(t--)
{flag=0;
scanf("%lf",&n);
long long int x=length(n);
//printf("%d**\n",x);
long long int arr1[x],arr2[x];
for(i=x-1;i>=0;i--)
{
arr1[i]=fmod(n,10);
n=n/10;
}
for(i=0;i<x;i++)
{
if(arr1[i]==4)
{
arr2[i]=3;
}
else
arr2[i]=arr1[i];
}
for(i=0;i<x;i++)
{
arr1[i]=arr1[i]-arr2[i];
if(flag==0 && arr1[i]==0)
arr1[i]=-1;
else
    flag=1;
}
for(i=0;i<x;i++)
printf("%lld",arr2[i]);
printf(" ");
for(i=0;i<x;i++)
{
if(arr1[i]!=-1)
printf("%lld",arr1[i]);
}
printf("\n");
}
return 0;
}
