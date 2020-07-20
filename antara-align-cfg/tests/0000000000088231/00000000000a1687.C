#include<stdio.h>
#include<math.h>
int count1=0;
long long int length(double n)
{
long long int count=0;
while(n>0)
{
count++;
n=n/10;
}
return count;
}
int main()
{
int t,i,flag=0,k,m=0;
long long int n;
scanf("%d",&t);
k=t;
while(t--)
{flag=0;count1=0;
scanf("%lld",&n);
long long int x=length(n);
long long int arr1[x],arr2[x];
for(i=x-1;i>=0;i--)
{
arr1[i]=n%10;
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
{
    arr1[i]=-1;
    count1++;}
else
    flag=1;
}
printf("Case #%d: ",k-(k-(m++))+1);
for(i=0;i<x;i++)
printf("%lld",arr2[i]);
printf(" ");
for(i=0;i<x;i++)
{
if(arr1[i]!=-1)
printf("%lld",arr1[i]);
else if(count1==x)
printf("0");
}
printf("\n");
}
return 0;
}
