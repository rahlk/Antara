#include<stdio.h>
int t;
int a[10];
void p(int n)
{
    int n1=n;
    int i,re,rn,c=0,temp,q=0;
    static int b=0;
    b++;
    while(n!=0)
    {
        re=n%10;
        a[q]=re;
        q++;
        n/=10;
    }
    for(i=0;i<q;i++)
    {
        if(a[i]!=8)
        {
          c++;  
        }
    else
    break;
    }
    printf("\n");
    if(c==q)
    {
    temp=n1/2;
    rn=n1-temp;
    printf("%d\t%d\t",temp,rn);
}}
void main()
{
int i,l,n;
printf("enter no of test cases\n");
scanf("%d",&t);
if(t>0&&t<101)
{
for(i=1;i<=t;i++)
{
printf("enter number\n");
scanf("%d",&n); 
p(n);
}
}
else
{
printf("enter test cases within range\n");
}
}