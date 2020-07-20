#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        long long int a;
        scanf("%lld",&a);
        long long int temp=a;
        long long int len=log10(a)+1;
        long long int temp1=0,temp2=0;
        long long int x=pow(10,len)/10;
        for(j=1;j<=len;j++)
        {
            temp=temp/x;
            if(temp%10==4)
            {
               temp1=temp1*10+1;
               temp2=temp2*10+3;
            }
            else
            {
                temp1=temp1*10;
                temp2=temp2*10+temp%10;
            }
            x=x/10;
            temp=a;
        }
        printf("Case #%lld: %lld %lld\n",i,temp1,temp2);
    }
}