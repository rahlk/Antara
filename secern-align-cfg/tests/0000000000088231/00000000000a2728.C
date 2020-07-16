#include<stdio.h>
int digit(unsigned long long A );
int check(unsigned long long X, unsigned long long Y, unsigned long long Z);
int main()
{
    int T,i,j;
    unsigned long long count,N,res,a=0,b;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        N=0;
        
        scanf("%llu",&N);
        
        b=N;
        
        count=digit(N);
        
        for(j=count;j>0;j--)
        {
            a=check(N,count,a);
            
           
            
            a=check(a,count,a);
            count--;
            
     
        }
        
        b=b-a;
        printf("%llu %llu \n",a,b);
    }
    
}
int digit(unsigned long long A)
{
  unsigned long long count=0;
    while( A!= 0)
    {
        A /= 10;
        ++count;
         
    }
    return count;
}
int check(unsigned long long X, unsigned long long Y, unsigned long long Z)
{
    
    unsigned long long i,M,N,tot=1,res,b,a=Z;
    for(i=0;i<Y-1;i++)
    {
        tot=tot*10;
        
    }
    M=X;
    N=X;
    M=M%tot;
    N=N%(tot*10);
   
    res=N-M;
    res=res/tot;
    b=N;
    
    if(res==4)
    {
        a++;
        b--;
        check(b,Y,a);
    }
   else
    return a;
    
}
