#include<stdio.h>
#include<math.h>
#include <stdlib.h>
void main()
{
    int t,i,m,f;
    long long int n,k,s,g;
   
        scanf("%d",&t);
        i=t;
        while(t!=0&&t<101)
        {
            f=0;
            g=0;
            scanf("%lld",&k);
            n=k;
            while(k!=0)
            {
            m=k%10;
            k=k/10;
            if(m==4)
            {
               s=pow(10,f)*2;
               g=g+s;
            }
            ++f;
            }
            printf("Case #%d: %d %d",i-t+1,n-g,g);
            --t;
    }
}
