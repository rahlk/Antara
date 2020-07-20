#include<stdio.h>
int t;
void p(char n[],int l)
{
    int i,re,rn=0,c=0,temp;
    static b=0;
    b++;
    for(i=0;i<l;i++)
    {
       if(n[i]=='8')
       {
           c++;
           break;
       }
       else
       {
           re=int(n[i]);
           rn=rn*10+re;
       }
      
    }
    if(c==0)
    {
        temp=rn/2;
        printf("case #%d:%d\t%d\t",b,temp,temp);
    } 
}
void main()
{
int i,l;
char n[5];
printf("enter no of test cases\n");
scanf("%d",&t);
if(t>0&&t<101)
{
for(i=1;i<=t;i++)
{
printf("enter number\n");
scanf("%s",n);
l=strlen(n);
p(n,l);
}
}
else
{
printf("enter test cases within range\n");
}