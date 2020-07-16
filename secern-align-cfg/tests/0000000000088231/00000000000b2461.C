#include<iostream.h>

int main() {
   int T;
unsigned long long N,c1=0,c2=0,temp,c,ten=1;
  cin>>T;
   for(int i=1;i<=T;i++)
   {
        
        cin>>N;
        temp=N;
       while(temp!=0)
       {
           c=temp%10;
           temp=temp/10;
           if(c==4)
           {
               c1=c1+(3*ten);
               c2=c2+(1*ten);
           }
           else{
               c1=c1+(c*ten);
              
           }
           ten = ten*10;
       }
       
       if(N==(c1+c2))
       {
       
       cout<<"Case #"<<i<<":"<<c1<<c2;
       }
       
       ten=1;
        c1=0;
        c2=0;
   }
  
   return 0;
}