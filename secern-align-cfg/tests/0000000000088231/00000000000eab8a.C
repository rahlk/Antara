#include <stdio.h>
#include<malloc.h>
int getLen(int n)
{
int c;
c=0;
while(n!=0)
{
n/=10;
c++;
}
return c;
}
int atoi(int *num,int l)
{
int n;
n=0;
for(int i=0;i<l;i++)
{
n=n*10+num[i];
}
return n;
}

void getArray(int n,int l,int *num1,int *num2)
{
int rem;
int *n1,*n2;
n1=(int *)malloc(sizeof(int)*l);
n2=(int *)malloc(sizeof(int)*l);
for(int i=l-1;n!=0;i--,n/=10)
{
rem=n%10;
if(rem!=4)
{
n1[i]=rem;
n2[i]=0;
}
else
{
n1[i]=2;
n2[i]=2;
}
}
*num1=atoi(n1,l);
*num2=atoi(n2,l);
}
int main()
{
int t,len,*num;
int num1,num2;
scanf("%d",&t);
num=(int *)malloc(sizeof(int)*t);
for(int i=0;i<t;i++)
{
scanf("%d",&num[i]);
}
for(int i=0;i<t;i++)
{
len=getLen(num[i]);
getArray(num[i],len,&num1,&num2);
printf("Case #%d: %d %d\n",i+1,num1,num2);
}
return 0;
}