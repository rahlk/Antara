#include <stdio.h>

int main()
{
    int t,c=0,n,a,b,r,r1,q,s,s1,i,j,r2,v;
    scanf("%d",&t);
    while(t)
    {
        c++;
        v=0;
        scanf("%d",&n);
        for(i=2;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i+j==n)
                {
                    r=i;
                    s=0;
                    q=j;
                    a=i;
                    b=j;
                    s1=0;
                    while(r)
                    {
                        r1=r%10;
                        r=r/10;
                        if(r1==4)
                        {
                            s=1;
                        }
                    }
                     while(q)
                    {
                        r2=q%10;
                        q=q/10;
                        if(r2==4)
                        {
                            s1=1;
                        }
                    }
                    if(s!=1 && s1!=1)
                    {
                        v=1;
                        printf("Case #%d: %d %d",c,a,b);
                        break;
                    }
                }
                if(v==1)
                    {
                        break;
                    }
            }
        }
        t--;
    }

    return 0;
}