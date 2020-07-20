#include<stdio.h>
#include<math.h>
int main()
{
    int t,i=1;scanf("%d",&t);
    while(t--)
    {
        int num1=0,num2=0,digit,copy,n,times=0;scanf("%d",&n);
        copy=n;
        while(copy>0)
        {
        	digit=copy%10;copy/=10;times++;
        	if(digit==4){num2=pow(10,times-1);n-=num2;num1+=num2;}
        }
        printf("Case #%d: %d %d\n",i++,num1,n);
    }
    return 0;
}