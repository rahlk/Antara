#include<stdio.h>
#include<math.h>
int main()
{
    int long t,n;
    scanf("%ld",&t);
    for(int i = 1;i<=t;i++)
    {
        scanf("%ld",&n);
        int long a =n, c=0,r=0;
        while(a>0)
        {
            int long p = pow(10,c);
            int f = a%10;
            if(f == 4)
                f=2;
            r+=(p*f);
            c++;
            a=a/10;
        }
        printf("Case #%d: %ld %ld\n",i,r,n-r);
    }
}
