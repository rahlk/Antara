#include<stdio.h>
#include<stdlib.h>
 void foregone(int t,int y)
 {
     long long A,B,c=0,x,i,e;
     A=B=t/2;
     x=A;
     int a[100],b[100];
     while(x!=0)
     {
        a[c]=x%10;
        b[c]=x%10;
        x=x/10;
        if(a[c]==4)
        {
            a[c]++;
            b[c]--;
        }
        
        c++;
     }
    
     if(t%2!=0)
        {
            a[0]++;
            if(a[0]==4)
            {
                a[0]++;
                b[0]--;
            }
            
        }
     A=B=0;
     e=1;
     for(i=0;i<c;i++)
     {
         A=A+(a[i]*e);
         B=B+(b[i]*e);
         e=e*10;
     }
     printf("Case #%d: %lld %lld\n",y,A,B);
    
 }
int main()
{
    int T;
    scanf("%d",&T);
    long long test;
    for(int i=0;i<T;i++)
    {
        scanf("%lld",&test);
        foregone(test,i+1);
    }
    return 0;
    
}