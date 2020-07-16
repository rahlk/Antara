#include<stdio.h>
int  main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {long long int n,k=0,m,c,v=0,val[101],j=1,l,i,a[110];
    scanf("%lld",&n);
    m=n;
    c=m;
    while(n>0)
    {
    if (n%10==4)
    {
        val[k]=1;
    }
    else
    {
        val[k]=0;
    }n=n/10;
    k++;
    }
     printf("case #%lld: ",j);
     j++;
     l=k-1;
     k=0;
     //printf("saxdd%lld",val[0]);
     while (m>0)
     {
         a[l]=m%10-val[k];
         k++;
         l--;
         m=m/10;
     }
     
     for (i=0;i<k;i++)
     {
         printf("%lld",a[i]);
         v=(v*10)+a[i];
     }
     printf(" %lld\n",c-v);
    }
    
return 0;}