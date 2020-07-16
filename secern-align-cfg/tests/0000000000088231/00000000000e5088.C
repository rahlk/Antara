#include <stdio.h>
#include <stdlib.h>

int check(int);

int main()
{
    int t,n,i,j,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<n;j++)
        {
            if(check(j))
                c = n - j;
            if(check(c))
                printf("case #%d: %d %d",t,j,c);
            else
                continue;
        }
    }
    return 0;
}

int check(int n)
{
    int flag = 0,m,r;
    m = n;
    while(m > 0)
    {
        r = m % 10;
        m = m / 10;

        if(r == 4)
            flag = 1 ;
    }
    return flag;
}
