//First suggession use on screen keyboard, now to the solution

#include<stdio.h>
#define ll long long

int check4(ll num)
{
    ll temp;
	int flag = 1;
    while(num)
    {
        temp = num%10;
        num/=10;
        if(temp == 4)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int T, i=1;
    ll N,A,B;
    scanf("%d",&T);
    for(;i<=T;i++)
    {
        scanf("%lld",&N);
        A = 1;
        B = N-1;
        while(1)
        {
        	if(check4(A) && check4(B))
        		break;
            A++;
            B--;
        }
        printf("Case #%d: %lld %lld",i,A,B);
    }
    return 0;
}