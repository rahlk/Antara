//First suggession use on screen keyboard, now to the solution

#include<stdio.h>
#define ll long long

int check4(ll num)
{
    while(num)
    {
        if(num%10 == 4)
        	return 0;
        num/=10;
    }
    return 1;
}

int main()
{
    int T, i=1;
    ll N,A,B;
    scanf("%d",&T);
    for(;i<=T;i++)
    {
        scanf("%lld",&N);
        A = N;
        B = 0;
        while(1)
        {
            A /= 2; B = N-A;
        	if(check4(A) && check4(B))
        		break;
            A++;
            B--;
        }
        printf("Case #%d: %lld %lld\n",i,A,B);
    }
    return 0;
}