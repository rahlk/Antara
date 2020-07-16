#include<stdio.h>
int chck(int n);
int main()
{
    int t;
    scanf("%d", &t);
    long int N[a];
    int i, j, k;
    for(i=0;i<t;i++)
      {
          scanf("%ld", &N[i]);
      }
     for(i=0;i<t;i++)
     {
         long int n=N[i];
         for(j=n/2;j<=n;j++)
         {
             int y=chck(j);
             int s=0;
             if(y==1)
             {
                 for(k=j;k>=1;k--)
                 {
                     int p=chck(k);
                     if(p==1&&j+k==n)
                     {
                         s=k;
                         break;
                     }
                 }
                 if(s!=0)
                 {printf("%d %d\n", j, s);
                   break;
                 }
             }
             
         }
     }
}
int chck(int n)
{
    int c=1;
    while(n!=0)
    {
        if(n%10==4)
        {
            c=0;
            break;
        }
        n/=10;
    }
    return c;
}