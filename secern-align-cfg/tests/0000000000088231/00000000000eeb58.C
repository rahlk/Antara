#include <stdio.h>
#include <math.h>
int main ()

{   long long int a,l,k,i,j,T,N,O,ara[10^100],M=0;
    scanf ("%lld",&T);
    for (i=1;i<=T;i++)
    {   scanf ("\n%lld",&N);
        j=0;
        O=N;
        while (O!=0)
        {   a = O%10;
            if (a==4)
            {   a=3;
            }
            ara[j]=a;
            O=O/10;
            j++;
        }
        l=0;
        for (k=0;k<j;k++)
        {
            M= M + (ara[k]*pow(10,l));
            l++;
        }
        printf ("Case #%lld: %lld %lld\n",i,M,N-M);
    }
return 0;

}


