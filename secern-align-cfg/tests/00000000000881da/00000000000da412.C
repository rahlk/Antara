#include<stdio.h>

int main() {
   long long int t,n,i,c=0;
   scanf("%lld",&t);
   while(t--)
   {   c++;
       scanf("%lld",&n);
       char a[(n-1)*2+1],b[(n-1)*2+1];
       scanf("%s",&a);
       for(i=0;i<(n-1)*2;i++)
       {
           if(a[i]=='S')
               b[i]='E';
           else
               b[i]='S';
       }
       printf("Case #%lld: %s\n",c,b);
   }
}
