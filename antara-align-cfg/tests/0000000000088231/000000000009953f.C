#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
     {
        long int n,m;
        long int o=0;
        scanf("%ld",&n);
        m=n;
        int k=0;
        while(m)
         {
            if(m%10==4)
            {
              n=n-(2*pow(10,k));
              o=o+2*pow(10,k);
            }
            k++;
            m=m/10;
         }
         
         printf("%ld %ld\n",n,o);
     }
    return 0;
 }