#include<stdio.h>
int main()
{
    int n,tc,b=1;
    scanf("%d",&tc);
    for(int i=0;i<tc;i++)
    {
        scanf("%d",&n);
        int t=n;
        int s;
        int i=1;
        int sum=0;
        while(n>0)
        {
            s=n%10;
            if(s==4)
            {
                sum=sum+i;
            }
            i=i*10;
            n=n/10;
        }
        int m=t-sum;
        printf("Case #%d: %d %d\n",b++,sum,m);
    }
    return 0;
}    