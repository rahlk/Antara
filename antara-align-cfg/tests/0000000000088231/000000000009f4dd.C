#include<stdio.h>
#include <stdlib.h>
void main()
{
    int t,num,i,A,B,a[100];
    scanf("%d",&t);

    for(i=0;i<t;++i)
    {
        scanf("%d",&a[i]);
    }

   int P,Q;
for(int j=0;j<t;++j)
{

for(i=1;i<a[j];++i)
{   A=a[j]-i;
    B=a[j]-A;
    P=A;
    Q=B;
int flag=0,flag1=0;
while(A!=0)
{
    num=A%10;
    A=A/10;
    if(num==4)
    {   flag=1;
        break;

    }
    else
        flag=0;
}
while(B!=0)
{
    num=B%10;
    B=B/10;
    if(num==4)
    {   flag1=1;
        break;

    }
    else
        flag1=0;
}
if(flag1==0&&flag==0)
{
printf("Case #%d: %d %d\n",j+1,P,Q);
break;
}






}
}
exit(0);
}
