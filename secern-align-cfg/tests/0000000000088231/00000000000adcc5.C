#include<stdio.h>
#include<math.h>
#define ll long long
int _main(int num)
{
    int count = 1;
    ll temp = num,x;
    while(temp)
    {
        if(temp%10 == 4)
        {
            num -= (pow(10,count));
        }
        count++;
        temp /= 10;
    }
    return num;
}

int main()
{
    int T, i=1;
    ll N,A,B,ans;
    scanf("%d",&T);
    for(;i<=T;i++)
    {
        scanf("%d",&N);
        ans = _main(N);
        printf("#Case #%d: %lld %lld\n",i,ans,N-ans);
    }
    return 0;
}