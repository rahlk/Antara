#include<stdio.h>
typedef long long int ll;
int check(int n)
{
    while(n!=0)
    {
    int x=n%10;
    if(x==4)
    {
        return 1;
    }
    n=n/10;
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d\n",&t);
    int k=1;
    while(t--)
    {
        ll N;
        scanf("%ld",&N);
        if(check(N))
        {
            int n=1;
            int x=N-n;
            printf("case #%d:%d %d\n",k,x,n);
        }
        else
        {
            printf("0");
        }
        k++;
    }
    return 0;
}