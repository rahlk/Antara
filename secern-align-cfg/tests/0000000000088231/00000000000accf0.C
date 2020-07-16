#include<stdio.h>
int main()
{
int n,dgt,i,res,test,tok,k;
printf("enter the number of digits in the amount");
scanf("%d",&dgt);
printf("Enter the winners prize amount");
scanf("%d",&n);
for(i=dgt;i>=0;i--)
{
res=0;
test=n;
tok=1;
for(k=0;k<i;k++)
    {
        tok=tok*10;
    }
res=test%tok;
if(res==4)
    printf("error here at digit number %d",i);
}
return 0;
}
