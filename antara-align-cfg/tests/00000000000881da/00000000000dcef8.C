#include<stdio.h>
#include<string.h>

int main() {
   long long int t,n,l,i,c=0;
   scanf("%lld",&t);
   while(t--)
   {   c++;
       scanf("%lld",&n);
       char a[(n-1)*2];
       scanf("%s",&a);
       for(i=0;i<(n-1)*2;i++)
       {
           if(a[i]=='S')
               a[i]='E';
           else
               a[i]='S';
       }
       printf("Case #%lld: %s\n",c,a);
   }
}
