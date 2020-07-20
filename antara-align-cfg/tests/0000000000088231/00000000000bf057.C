#include<stdio.h>
long long int four(long long int num)
{
    long long int power=1,ans =0,rem;
    while(num!=0)
    {
        rem = num%10;
        if(rem == 4)
        {
            ans = ans+(power*1);
        }
        power = power*10;
        num = num/10;
    }
    return ans;
}
int main()
{
    long long int n,temp=1,i,a,b;
    scanf("%lld",&n);
    long long int ary[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ary[i]);
    }
    for(i=0;i<3;i++)
    {
        a = four(ary[i]);
        b = ary[i]-a;
        printf("Case #%lld: %lld %lld\n",temp,a,b);
        temp++;
    }
    return 0;
}
