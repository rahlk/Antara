#include<stdio.h>
#include<math.h>
void reverseArray(int *,int);
int placeValue(int*,int,int);
int isPrime(int);
int hasFour(int num,int *a)
{
printf("\n *********** has four chala *************\n");
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
for(int i=0;i<length;i++)
{
printf("%d\n",a[i]);
}
return length;
}



void reverseArray(int *a,int length)
{
int i,k;
for(i=1;i<length;i++,length--)
{
k=a[i];
a[i]=a[length];
a[length]=k;
}
}




int placeValue(int *b,int length,int x)
{
printf("Place value\n");
for(int i=x;i<length;i++)
{
printf("for\n");
if(b[i]==4)
{
printf("if\n");
return i;
}
}
return -1;
}













int isPrime(int num)
{
if(num/2==2 || num==2) return 1;
int x,y,z;
z=0;
for(y=2;y<num/2;y++)
{
if(num%y==0)
{
z=1;
break;
}
}
if(z==0)
{
return -1;
}
else
{
return 1; 
}
}















int main()
{
int testCases,z;
scanf("%d",&testCases);
fflush(stdin);
for(z=1;z<=testCases;z++)
{
int i,num,num1,num2,b[12],var,isPrimeNo;
scanf("%d",&num);
fflush(stdin);
num2=num/2;
if(num%2!=0)num1=num/2+1;
else num1=num/2;
int length=hasFour(num1,b);
isPrimeNo=isPrime(num);

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
printf("pv : %d\n",pv);
if(pv==-1) break;
var=pow(10,pv-1);
num1=num1+var;
num2=num2-var;
printf("var : %d\n",var);
}
printf("Case #%d: %d %d\n",z,num1,num2);
}
}
return 0;
}