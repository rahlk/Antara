#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,c=0,d=0;
        scanf("%lld",&n);
        int a[100],b[100],i=0;
        while(n>0)
        {
            a[i]=n%10;
            n=n/10;
            i++;
        }
        for(int j=0;j<i;j++)
        {
            if(a[j]==4)
            {
                a[j]=a[j]-1;
                b[j]=1;
            }
            else {
                b[j]=0;
            }
        }
        for(int j=i-1;j>=0;j--)
        {
            c=c*10+a[j];
        }

        for(int j=i-1;j>=0;j--)
        {
            d=d*10+b[j];
        }
        printf("%lld %lld",c,d);
    }
}
