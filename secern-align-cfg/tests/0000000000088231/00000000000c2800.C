#include<stdio.h>
unsigned long long int four(unsigned long long int num)
{
    unsigned long long int power=1,ans =0,rem;
    while(num!=0)
    {
        rem = num%10;
        if(rem == 4)
        {
            ans = ans+(power*2);
        }
        power = power*10;
        num = num/10;
    }
    return ans;
}
int main()
{
    unsigned long long int n,temp=1,i,a,b;
    scanf("%llu",&n);
    unsigned long long int ary[n];
    for(i=0;i<n;i++)
    {
        scanf("%llu",&ary[i]);
    }
    for(i=0;i<n;i++)
    {
        a = four(ary[i]);
        b = ary[i]-a;
        printf("Case #%llu: %llu %llu\n",temp,a,b);
        temp++;
    }
    return 0;
}
