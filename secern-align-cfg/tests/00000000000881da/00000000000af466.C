#include<stdio.h>
typedef unsigned u;
int main()
{
    u t=0,T,n;char c;
    for(scanf("%u",&T);t++<T;putchar('\n'))
    {
        scanf("%u",&n);
        printf("Case #%u: ",t);
        while((c=getchar())<'A');
        do
        {
            if(c=='S')putchar('E');
            if(c=='E')putchar('S');
        }
        while((c=getchar())>='A');
    }
    return 0;
}