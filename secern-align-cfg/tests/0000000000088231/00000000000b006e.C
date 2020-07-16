#include<stdio.h>
#include<malloc.h>
int getLength(long num)
{
int count=0;
while(num>0)
{
num/=10;
count++;
}
return count;
}
int main()
{
int T,length,temp,i,data,digitValue,e;
int *a1,*n1,*n2;	
scanf("%d",&T);
if(T<0 || T>100)return 0;
e=1;
while(e<=T)
{
int x;
scanf("%d",&x);
length=getLength(x);
a1=(int *)malloc(sizeof(int)*length);
n1=(int *)malloc(sizeof(int)*length);
n2=(int *)malloc(sizeof(int)*length);
i=length-1;
temp=x;
while(i>=0)
{
data=temp%10;
a1[i]=data;
temp=temp/10;
i--;
}
i=0;
while(i<length)
{
if(a1[i]==4)
{
n1[i]=1;
n2[i]=3;
}
else
{
n1[i]=a1[i];
n2[i]=0;
}
i++;
}
int k;
digitValue=1;
k=length;
while(k>1)
{
digitValue=digitValue*10;
k--;
}
int s=0;
int result1=0;
int result2=0;
while(s<=length-1)
{
result1=result1+(n1[s]*digitValue);
result2=result2+(n2[s]*digitValue);
digitValue/=10;
s++;
}
printf("Case #%d: %d %d\n",e,result1,result2);
e++;
}
return 0;
}