#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int flagger(long a)
{
    while(a>0)
    {
        int rem = a%10;
        if(rem == 4)
            return 0;
        a /= 10;
    }
    return 1;
}

void solve(int t)
{
    long int n,a,b;
    int flaga=1,flagb=1;
    scanf("%d",&n);
    for(a=0; a<((n/2)+1); a++)
    {
        b=n-a;
        flaga = flagger(a);
        flagb = flagger(b);
        if(flaga&&flagb)
            break;
    }
    printf("Case #%d: %ld %ld\n",t,a,b);
}

int main()
{
    int T,i=1;
    scanf("%d",&T);
    while(i<=T)
       { solve(i);
            i++;
       }
    return 0;
}