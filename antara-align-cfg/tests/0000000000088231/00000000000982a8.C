#include<stdio.h>

main()
{
   long long int n,c,i,j,m;
   int t;
    scanf("%d",&t);
    while(t--)
    {i=0;
        scanf("%lld",&n);
     m=n;c=0;
     while(m!=0)
     {
         m=m/10;
         c++;
     }
     long long int* a=(long long int *)malloc(sizeof(long long int)*c);
     long long int* b=(long long int *)calloc(c,sizeof(long long int));


        while(n!=0)
        {
            a[i]=n%10;
            if(a[i]==4)
            {
                a[i]=3;
                b[i]=1;
            }
            i++;
            n=n/10;
        }
        for(j=i-1;j>=0;j--)
        {
            printf("%lld",a[j]);
        }
        printf(" ");
        j=i-1;
        while(b[j]==0)
        {
            j--;
        }
if(j==-1)
{
    printf("0\n");
    continue;
}
         for(;j>=0;j--)
        {

            printf("%lld",b[j]);
        }
        printf("\n");

    }
}
