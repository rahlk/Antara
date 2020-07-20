#include<stdio.h>
int main()
{
    int a,b,T,k,sum=0,count=0,rem=0;
   long long int N,i,j,r,x,y,A,B;
    scanf("%d",&T);
    for(k=0;k<T;k++)
    {
        scanf("%lld",&N);
count=0;
    r=N;
    while(r!=0)
    {
        rem=r%10;
        r=r/10;
        if(rem==4)
        {
            break;
        }
    }
    
   
    
        for(i=N-1;i>0;i--)
        {
x=i;

count=0;
while(x!=0)
    {
        rem=x%10;
        x=x/10;
        if(rem==4)
        {
           count++;
        }
    }
    if(count>0)
        continue;
            j=N-i;
            y=j;
    count=0;
while(y!=0)
    {
        rem=y%10;
        y=y/10;
        if(rem==4)
        {
           count++;
        }
    }
    if(count>0)
        continue;

                if(i+j==N)
               {

                A=i;
                B=j;
                break;
               }
            }

         printf("Case #%d: %lld %lld\n",k+1,A,B);
    }

    
    return 0;
}
