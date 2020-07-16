#include<stdio.h>
#include<math.h>
int istherefour(long a);
long send(long b);
int main()
{
    int t,result;
    scanf("%d",&t);
    long n[t],num;
    for(int i=0;i<t;i++)
    {
        scanf("%ld",&n[i]);
    }
    for(int i=0;i<t;i++)
    {
        num = send(n[i]);
        for(long j=num;j>4;j--)
        {
            if(istherefour(j)==0 && istherefour(n[i]-j)==0)
            {
                printf("Case #%d: %ld %ld\n",i+1,j,n[i]-j);
                j=0;
            }
        }
    }
}
int istherefour(long a)
{
    long r;
  while(a!=0)
    {
        r=a%10;
        if(r==4)
        {
            return 1;
        }
        a=a/10;
        
    }
    return 0;
}
long send(long b)
{
    int r;
    long sum=0;
    int count=0;
    while(b!=0)
    {
        r= b%10;
        if(r==4)
        {
            sum += 3*pow(10,count);
        }
        count++;
        b=b/10;
    }
    return sum;
}