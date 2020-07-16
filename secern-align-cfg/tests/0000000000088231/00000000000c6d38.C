#include<stdio.h>
#include<stdlib.h>
int check(long);
int main()
{
    long i,j,x,y,m,*n;
    int T,res1,res2,k;
    
    scanf("%d",&T);
    n=(long*)malloc(T*sizeof(long));
    for(k=1;k<=T;k++)
        scanf("%ld\n",(n+k));
        k=1;
        
     while(k<=T)
     {
         i=*(n+k)-1;
         j=1;
         while(i<*(n+k)&&i>0)
         {
             res1=check(i);
             if(res1==1)
             {
                 while(j<=*(n+k)-i)
                 {
                     res2=check(j);
                     if(res2==1)
                     {
                         m=i+j;
                         if(*(n+k)==m)
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
         printf("\nCase #%d: %ld %ld",k,x,y);
         k++;
     }
     return 0;
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