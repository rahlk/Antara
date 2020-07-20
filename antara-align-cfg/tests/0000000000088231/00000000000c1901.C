#include<stdio.h>
long int four(long int num)
{
    long int power=1,ans =0,rem;
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
    long int n,temp=1,i,a,b;
    scanf("%ld",&n);
    long int ary[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&ary[i]);
    }
    for(i=0;i<3;i++)
    {
        a = four(ary[i]);
        b = ary[i]-a;
        printf("Case #%ld: %ld %ld\n",temp,a,b);
        temp++;
    }
    return 0;
}
