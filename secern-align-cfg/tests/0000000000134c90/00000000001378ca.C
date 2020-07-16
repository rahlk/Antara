#include<iostream>
#include<bits/stdc++.h>
long long  t,b,i,j,n,aa,c,r,p,s,ct;
char name[104][504];
using namespace std;
int main()
{
    scanf("%lld",&t);
    b=0;
    while(t--)
    {
        r=0;
        p=0;
        s=0;
        ct=0;
        b++;
        aa=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%s",name[i]);
        }
        for(i=0;i<255;i++)
        {
            for(j=0;j<n;j++)
            {
                if(name[j][i]=='R')
                {
                    r++;
                    if(r==1)
                    {
                        ct++;
                    }
                }
                else if(name[j][i]=='P')
                {
                    p++;
                    if(p==1)
                    {
                        ct++;
                    }
                }
                else if(name[j][i]=='S')
                {
                    s++;
                    if(s==1)
                    {
                        ct++;
                    }
                }
            }
            if(ct>1)
            {
                aa=1;
                break;
            }
            else
            {
                if(r==0 && p==0)
                {
                    
                    printf("Case #%lld: R\n",b);
                    break;
                }
                else if(r==0 && s==0)
                {
                    printf("Case #%lld: S\n",b);
                    break;
                }
                else if(s==0 && p==0)
                {
                    printf("Case #%lld: P\n",b);
                    break;
                }
            }
        }
        if(aa==1)
        {
            printf("Case #%lld: IMPOSSIBLE\n",b);
        }
    }
}