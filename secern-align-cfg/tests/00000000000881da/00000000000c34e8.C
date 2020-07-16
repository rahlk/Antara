#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main() 
{
   long long int t,i,j,k,n,f=0,x,y;
   char c,d;
   scanf("%lld",&t);
   while(t--)
   {
       x=0;y=0;
       f++;
       scanf("%lld",&n);
       char str[2*n-2];
       scanf("%s",str);
       long long int a[1000][1000]={0};
       a[0][0]=1;
       for(i=0;i<2*n-2;i++)
       {
           if(str[i]-'A'=='S'-'A')
           {
               y++;
               a[x][y]=1;
           }
           else
           {
               x++;
               a[x][y]=1;
           }
       }
       long long int ri=0,li=0;
       printf("Case #%lld: ",f);
       while(1)
       {
           if(a[li][ri]==a[li][ri+1])
           {
               ri=ri+1;
               printf("E");
           }
           else
           {
               li=li+1;
              printf("S");
           }
           if(li==n-1 && ri==n-1)
           {
               break;
           }
       }
       printf("\n");
   }
}
