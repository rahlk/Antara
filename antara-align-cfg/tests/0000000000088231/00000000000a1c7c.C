#include<stdio.h>
#include <stdlib.h>
#include<math.h>
void main()
{    int num,t,s,check,i=0,A,B,a[100];
    scanf("%d",&t);

    for(i=0;i<t;++i)
    {
        scanf("%d",&a[i]);
    }

for(int j=0;j<t;++j)
{
num=a[j];
int sum=0;
i=0;
while(num!=0)
{
    s=num%10;
    num=num/10;

    check=3*pow(10,i);
    ++i;
    if(s==4)
    {   sum=sum+check;


    }

}
A=sum;
B=a[j]-A;

printf("Case #%d: %d %d\n",j+1,A,B);

}




exit(0);
}
