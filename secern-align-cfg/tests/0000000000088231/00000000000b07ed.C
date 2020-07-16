#include<stdio.h>
int main()
{
    int i,n,t,k=0,z=0;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    scanf("%d",&a[i]);
    while(k<t)
    {
        z=0;
        n=a[k];
        k++;
       int a,b=0,d,c=1;
       a=n;
       while(a>1)
       {
        d=a%10;
        a=a/10;
        if(d==4)
          b=b+c;
          c=c*10;
       }
       a=n-b;
                printf("Case #%d: %d %d\n",k,a,b);

        }
    }
