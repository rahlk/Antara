#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() 
{
    long long int t,i,j,k,s,e,n,f=0;
    scanf("%lld",&t);
    while(t--)
    {
        s=0;e=0;f++;
        scanf("%lld",&n);
        char str[2*n-2];
        scanf("%s",str);
        printf("Case #%lld: ",f);
       for(i=0;i<2*n-2;i++)
       {
           if(str[i]-'A'=='S'-'A')
           {
               printf("E");
           }
           else
           {
               printf("S");
           }
       }
       printf("\n");
    }
}
