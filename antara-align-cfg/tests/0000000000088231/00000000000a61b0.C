#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
        long n,x=0,A,B,t=0,h,i;
        scanf("%ld",&n);
        A=n;
        h=n;
        while(h!=0)
        {
            h=h/10;
            t++;
        }
        long a[t];
        for(i=0;i<t;i++)
        {
            a[i]=n%10;
            n=n/10;
        }
        for(long j=0;j<t;j++)
        {
            if(a[i]==4)
            x=x+pow(10,i);
        }
        B=A-x;
        printf("%ld %ld",B,x);
    }
}