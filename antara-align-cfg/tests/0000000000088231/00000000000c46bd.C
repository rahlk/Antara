#include<stdio.h>
#include<math.h>
void reverseArray(int *,int);
int placeValue(int*,int,int);
int isPrime(int);
int hasFour(int num,int *a)
{
int k,validate=0;
k=1;
while(1)
{
if(num%10==4) validate=1;
a[k]=num%10;
num=num/10;
if(num<10)
{
if(num==4) validate=1;
k++;
a[k]=num;
break;
}
k++;
}
int length=k+1;
a[0]=validate;
return length;
}

int placeValue(int *b,int length,int x)
{
for(int i=x;i<length;i++)
{
if(b[i]==4)
{
return i;
}
}
return -1;
}

int main()
{
int testCases,z;
scanf("%d",&testCases);
fflush(stdin);
for(z=1;z<=testCases;z++)
{
int i,num,num1,num2,b[12],var;
scanf("%d",&num);
fflush(stdin);
num2=num/2;
if(num%2!=0)num1=num/2+1;
else num1=num/2;
int length=hasFour(num1,b);

if(b[0]==0)
{
printf("Case #%d: %d %d\n",z,num1,num2);
}
else
{
int pv=0;
while(1)
{
pv=placeValue(b,length,pv+1);
if(pv==-1) break;
var=(4*pow(10,pv-1));

num1=num1+var;
num2=num2-var;
}

printf("Case #%d: %d %d\n",z,num1,num2);
}
}
return 0;
}