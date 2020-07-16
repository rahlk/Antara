#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main() 
{
   long long int t,i,j,k,n,f=0;
   char c,d;
   scanf("%lld",&t);
   while(t--)
   {
       f++;
       scanf("%lld",&n);
       char str[2*n-2];
       scanf("%s",str);
       if(str[0]-'A'=='S'-'A')
       {
           printf("Case #%lld: ",f);
           for(i=1;i<=n-1;i++)
           {
               printf("E");
           }
           for(i=1;i<=n-1;i++)
           {
               printf("S");
           }
           printf("\n");
       }
       else
       {
           printf("Case #%lld: ",f);
           for(i=1;i<=n-1;i++)
           {
               printf("S");
           }
           for(i=1;i<=n-1;i++)
           {
               printf("E");
           }
           printf("\n");
       }
   }
}
