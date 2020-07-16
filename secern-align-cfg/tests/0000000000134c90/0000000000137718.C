
/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:04/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
int main()
{
    
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        long long a;
        scanf("%lld\n",&a);
        char str[a][505];
        long long len[a],max=0;
        for(long long i=0;i<a;i++)
        {
            scanf("%s", str[i]);
            long long l=strlen(str[i]);
            len[i]=l;
            if(max<l)
                max=l;
        }
        //printf("M%lld\n",max);
        int v[max],f=0;
        char ans[510];
        char end='0';
        int p=0;
        memset(v,0,sizeof(a));
        for(long long i=0;i<max;i++)
        {
            for(long long j=0;j<a;j++)
            {
                if(str[j][i%len[i]]=='R')
                    v[i]=v[i]|1;
                if(str[j][i%len[i]]=='P')
                    v[i]=v[i]|2;
                if(str[j][i%len[i]]=='S')
                    v[i]=v[i]|4;
            }
            if(v[i]==7)
            {
                f=1;
                break;
            }
            if(v[i]==1)
            {
                ans[p++]='P';
                break;
            }
            if(v[i]==2)
            {
                ans[p++]='S';
                break;
            }
            if(v[i]==3)
            {
                ans[p++]='P';
                if(i==0)
                    end='S';
            }
            if(v[i]==4)
            {
                ans[p++]='R';
                break;
            }
            if(v[i]==5)
            {
                ans[p++]='R';
                if(i==0)
                    end='P';
            }
            if(v[i]==6)
            {
                ans[p++]='S';
                if(i==0)
                    end='R';
            }
        }
        
        if(f==1)
            printf("IMPOSSIBLE\n");
        
        else
        {
            if(end!='0')
                ans[p++]=end;
            ans[p]='\0';
            printf("%s\n",ans);    
        }
    }
    return 0;
}