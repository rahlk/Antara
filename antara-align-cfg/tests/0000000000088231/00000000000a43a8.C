#include<stdio.h>

int main(){
int i,j,n,num,digit,sum,T;

scanf("%d",&T);
while(T--){
scanf("%d",&num);
for(i=1;i<num;i++)
{
if(i==4)
break;
for(j=1;j<num;j++)
{
if(j==4)
break;
sum=i+j;
if(sum==num)
{
while(sum>0)
{
digit=sum%10;
if(digit==4)
{
break;
}
sum=sum/10;

}
if(sum==0)
{
printf("%d/t%d",i,j);
}
}
}
}
}
return 0;
}

