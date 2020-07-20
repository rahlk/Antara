/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:06/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
long long p1[3],a=0;
long long p2[3],b=0;
void primeFactors1(long long n) 
{ 
    while (n%2 == 0) 
    { 
        //printf("%d ", 2); 
        n = n/2;
        p2[b++]=2;
    } 
    for (long long i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            //printf("%d ", i);
            p2[b++]=i;
            n = n/i; 
        } 
    } 
    if (n > 2) 
    {
        //printf ("%d ", n); 
        p2[b++]=n;
    }
} 
void primeFactors(long long n) 
{ 
    if (n%2 == 0) 
    { 
        //printf("%d ", 2); 
        n = n/2;
        p1[a++]=2;
    } 
    for (long long i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            //printf("%d ", i);
            p1[a++]=i;
            n = n/i; 
        } 
    } 
    if (n > 2) 
    {
        //printf ("%d ", n); 
        p1[a++]=n;
    }
} 
int cmp(const void * a,const void * b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    long long t=1;
    scanf("%lld\n",&t);
    
    for(long long j=0;j<t;j++)
    {
        a=0,b=0;
        memset(p1,0, sizeof(p1));
        memset(p2,0, sizeof(p2));
        
        long long n,l,i,x=0;
        scanf("%lld%lld\n",&n,&l);
        long long arr[l+3],series[l+3],sorted[l+3],sorted1[29];
        memset(arr,0, sizeof(arr));
        memset(series,0, sizeof(series));
        memset(sorted,0, sizeof(sorted));
        memset(sorted1,0, sizeof(sorted1));
        for(i=0;i<l;i++)
            scanf("%lld",&arr[i]);
        primeFactors(arr[0]);
        primeFactors1(arr[1]);
        long long next=p1[0];
        if(p1[0]!=p2[0] && p1[0]!=p2[b-1])
        {
           series[x]=p1[0]; 
           sorted[x++]=p1[0];
           next=p1[a-1];
        }
        else
        {
            series[x]=p1[a-1];
            sorted[x++]=p1[a-1];
            next=p1[0];
        }
        series[x]=next;
        sorted[x++]=next;
        //printf("%lld\n",next);
        for(i=1;i<l;i++)
        {
            long long z=arr[i]/next;
            next=z;
            series[x]=next;
            sorted[x++]=next;
            //printf("%lld ",z);
        }
        a=0;
        qsort(sorted,l+1,sizeof(sorted[0]),cmp);
        sorted1[a++]=sorted[0];
        for(i=0;i<l;i++)
        {
            if(sorted[i]==sorted[i+1])
                continue;
            sorted1[a++]=sorted[i+1];
        }
        /*for(i=0;i<a;i++)
            printf("%lld ",sorted1[i]);*/
        char ans[l+5];
        memset(ans,'\0', sizeof(ans));
        for(i=0;i<=l;i++)
        {
            for(b=0;b<=a;b++)
            {
                if(series[i]==sorted1[b])
                {
                    int s=b+65;
                    ans[i]=s;
                    //printf("%c ",ans[i]);
                    break;
                }
                    
            }
        }
        ans[i]='\0';
        printf("Case #%d: %s\n",j+1,ans);
    }
    return 0;
}