#include<stdio.h>
int check(long);
int main()
{
    long i,j,x,y,m,n[100];
    int T,res1,res2,k=1;
    
    scanf("%d\n",&T);
    for(k=1;k<=T;k++)
        scanf("%ld\n",&n[k]);
     while(k<=T)
     {
         i=N[k]-1;
         j=1;
         while(i<n[k]&&i>0)
         {
             res1=check(i);
             if(res1==1)
             {
                 while(j<=n[k]-i)
                 {
                     res2=check(j);
                     if(res2==1)
                     {
                         m=i+j;
                         if(n[k]==m)
                         {
                             x=i;
                             y=j;
                             break;
                         }
                     }
                     j++;
                 }
             }
             i--;
         }
         printf("case #%d: %ld %ld\n",k,x,y);
         k++;
     }
     getch();
}
int check(long m)
{
    long p,q,r;
    while(m!=0)
    {
        p=m%10;
        if(p==4)
        {
            r=0;
            break;
        }
        else
        r=1;
        q=m/10;
        m=q;
    }
    return r;
}