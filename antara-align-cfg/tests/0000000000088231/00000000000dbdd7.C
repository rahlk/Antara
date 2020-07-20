#include<stdio.h>
int main()
{
int a,b,c,n; 
int v=0;
int count=0;
scanf("%d",&a);  
a=n;
for(int i=0;n>0;i++)
{
    n=n/10;
    count++;
} 
for(int i=0;i<count;i++)
{
v=v*10;
 v=v+1;   
}
b=a-v;
c=a-b;  

printf("case #1: %d %d",b,c);
return 0;
}
