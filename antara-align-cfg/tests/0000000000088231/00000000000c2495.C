#include<stdio.h>

int main()
{
     long long int a[100],b[100],i,t,tc=0,n,c,s,x;
     int r;
     scanf("%lld",&t);
     while(t--)
     {   c=0;
     tc++;
         scanf("%lld",&n);
         x=n;
         for(i=0;i<100;i++)
         {
             a[i]=0;
             b[i]=0;
         }
         while(x>0)
         {
             x=x/10;
             c++;
         }
         for(i=c-1;i>=0;i--)
         {
             r=n%10;
             n=n/10;
             if(r==4)
             {
                a[i]=2;
                b[i]=2;
             }
             else
                a[i]=r;
         }
         for(i=0;i<c;i++)
         {
            if(b[i]>0)
            break;
         }
         s=i;
         printf("Case #%lld: ",tc);
         for(i=0;i<c;i++)
         {
             printf("%lld",a[i]);
         }
         printf(" ");
         for(i=s;i<c;i++)
         {
             printf("%lld",b[i]);
         }
         printf("\n");
     }
}