#include<stdio.h>

int main() {
   int T;
unsigned long long N,c1=0,c2=0,temp,c,res=1;
   scanf("%d",&T);
   for(int i=1;i<=T;i++)
   {
        scanf("llu",&N);
        temp=N;
       while(temp!=0)
       {
           c=temp%10;
           temp=temp/10;
           if(c==4)
           {
               c1=c1+(3*res);
               c2=c2+(1*res);
           }
           else{
               c1=c1+(c*res);
              
           }
           res = res*10;
       }
       
       if(N==(c1+c2))
       {
       printf("Case #%d: %llu %llu\n",i,c1,c2);
       }
       
       res=1;
        c1=0;
        c2=0;
   }
  
   return 0;
}