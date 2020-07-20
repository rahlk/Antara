#include<stdio.h>
#include<math.h>
#include <stdlib.h>
void main()
{
    int t,i,m,f,j=0,y;
    long long int n[100],k,s,g[100]={0};
   
        scanf("%d",&t);
        i=t;
        while(t!=0&&t<101)
        {
            f=0;
            scanf("%lld",&k);
            n[j]=k;
            while(k!=0)
            {
            m=k%10;
            k=k/10;
            if(m==4)
            {
               s=pow(10,f)*2;
               g[j]=g[j]+s;
            }
            ++f;
            }
            --t;
            ++j;
         }
         for(y=0;y<i;y++)
         {
             printf("Case #%d: %lld %lld\n",y+1,n[y]-g[y],g[y]);
         }
}