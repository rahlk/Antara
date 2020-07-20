
#include<stdio.h>
int main()
{
    long long int t,n,l,j=1,k=0,m,o,q=0;
    scanf("%ld",&t);
    
    while(q<t)
    {
        scanf("%ld\n",&n);
        o=n;
        while(n!=0)
        {
            m=n%10;
            if(m==4)
            {
                m=m-1;
            }
            k=k+j*m;
            j=j*10;
            n=n/10;
            
        }
        l=o-k;
    printf("Case #%ld: %ld %ld\n",q+1,k,l);
    k=0;
    j=1;
    q=q+1;

    }
    }