#include<stdio.h>
int main()
{
    int t,i,r,c,a[100],j;
    long long int n,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        c=0;
        j=0;
        scanf("%lld",&n);
        x=n;
        while(x>0)
        {
            r=x%10;
            if(r==4)
            {
                n=n-(r*pow(c));
                a[j]=
            }
            c++;
            x/=10;
        }
    }
    
}