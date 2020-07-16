#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int ad=0;
        int sum=0;
        while(n>0)
        {
            if(n%10==4)
            {
            ad=3;
            sum=sum*10+ad;
            break;
            }
            sum=sum*10+n%10;
            n=n/10;
        }
        printf("%d %d",sum,n-sum);
    }
    return 0;
}