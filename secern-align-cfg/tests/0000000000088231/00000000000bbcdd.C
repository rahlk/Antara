#include<stdio.h>
#include<malloc.h>
int getLength(long number)
{
int numberCount=0;
while(number>0)
{
number/=10;
++numberCount;
}
return numberCount;
}
int main()
{
long n,t;
int k,length;
scanf("%ld",&t);
long *ptr1,*ptr2;
for(int p=0;p<t;p++)
{
scanf("%ld",&n);
length=getLength(n);
ptr1=(long*)malloc(length*sizeof(long));
ptr2=(long*)malloc(length*sizeof(long));
for(int i=length-1;i!=-1;i--)
{
k=n%10;
ptr1[i]=k;
n/=10;
}
for(int i=0;i<length;i++)
{
if(ptr1[i]==4) 
{
ptr1[i]=2;
ptr2[i]=2;
}
else
{
ptr2[i]=0;
}
}
printf("Case #%d: ",p+1);
for(int x=0;x<length;x++) printf("%ld",ptr1[x]);
printf(" ");
for(int x=0;x<length;x++) printf("%ld",ptr2[x]);
printf("\n");
}
return 0;
}
