#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int t,n,*c,*d,k,i,j,count,largest1=0,largest2=0;
    scanf("%ld",&t);
    while(t)
    { 
        largest1=largest2=0;
        count=0;
        scanf("%ld%ld",&n,&k);
        c=(long int*)malloc(sizeof(long int)*n);
        d=(long int*)malloc(sizeof(long int)*n);
        for(i=0;i<n;i++)
        {
            scanf("%ld",&c[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%ld",&d[i]);
        }
        int loop=0;
        for(i=0;i<n;i++)
        {
            
            for(j=i;j<n;j++)
            {
                if(largest1==0||c[j]>largest1)
                {
                    largest1=c[j];
                }
                  if(largest2==0||d[j]>largest2)
                {
                    largest2=d[j];
                }
                if(abs(largest1-largest2)<=k)
                {
                    count++;
                }
                loop++;
            }
            largest1=0;
            largest2=0;
        }
        printf("Case #%ld: %ld\n",t,count);
       // printf("\n%d",loop);
        t--;
    }
}