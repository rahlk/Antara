#include<stdio.h>
long long power(int x, unsigned int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 
int main (void)
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long n,m;
        scanf("%lld",&n);
        m=n;
        int y=0;
        long long z=0;
        while(m!=0)
        {
            if(m%10==4)
            {
                z+=power(10,y)*2;
            }
             m/=10;

            y++;
        }
        printf("Case #%d: %lld %lld\n",t+1,(n-z),z);
        
    }
}