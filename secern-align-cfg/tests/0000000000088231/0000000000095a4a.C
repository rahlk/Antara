#include<stdio.h>
int main()
{
    int t,n,dig,rev,a,b,c,mf,tmp;
    scanf("%d",&t);
    while(t--)
    {
        mf=1,rev=0;
        scanf("%d",&n);
        tmp=n;
        while(n>0)
        {
            dig=n%10;
            if(dig==4)
              a=1;
              else
               a=0;
               rev=rev+a*mf;
               mf*=10;
               n/=10;
        }
        b=tmp-rev;
        c=tmp-b;
        printf("%d %d\n",b,c);
    }
}