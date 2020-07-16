#include<stdio.h>

int main() {
   int T;
unsigned long long N,check1=0,check2=0,temp,c,ten=1;
   scanf("%d",&T);
   for(int i=1;i<=T;i++)
   {
        scanf("%llu",&N);
        temp=N;
       while(temp!=0)
       {
           c=temp%10;
           temp=temp/10;
           if(c==4)
           {
               check1=check1+(3*ten);
               check2=check2+(1*ten);
           }
           else{
               check1=check1+(c*ten);
              
           }
           ten = ten*10;
       }
       
       if(N==(check1+check2))
       {
       printf("Case #%d: %llu %llu\n",i,check1,check2);
       }
       
       ten=1;
        check1=0;
        check2=0;
   }
  
   return 0;
}
