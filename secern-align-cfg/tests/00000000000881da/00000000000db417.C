#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() 
{
   long long int t,l,i,j,k=0;
   scanf("%lld",&t);
   
   while(t--)
   {
       k++; 
       scanf("%lld",&l);
       char str[2*l-2];
       scanf("%s",str);
        printf("Case #%lld: ",k);
        for(i=0;i<2*l-2;i++)
        {
            if(str[i]=='S')
             printf("E");
            else
             printf("S");
        }
        printf("\n");
   }
}
