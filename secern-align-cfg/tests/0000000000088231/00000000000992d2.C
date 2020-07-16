#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
     {
        long int n,m,o;
        scanf("%ld",&n);
        m=n;
        int k=0;
        while(m%10!=4)
         {
            k++;
            m=m/10;
         }
         n=n-(2*pow(10,k));
         o=2*pow(10,k);
         printf("%ld %ld\n",n,o);
     }
    return 0;
 }