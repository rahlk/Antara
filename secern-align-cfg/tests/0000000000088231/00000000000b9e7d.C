#include<stdio.h>
int main()
{
  int N,a,b,c,d,e,f,r1=0,r2=0;
  scanf("%d",&N);
  while(N>3)
  {
    a=N%10;
    b=(N/10)%10;
    c=(N/100)%10;
    d=N/1000;
   
   if(a==4||b==4||c==4||d==4)
   {
      
      if(a==4)
      {
        r1=r1+2;
        r2=N-2;
        
      }
      else if(b==4)
      {
          r1=r1+20;
          r2=r2+(N-20);
          
          
      }
      else if(c==4)
      {
         r1=r1+200;
         r2=r2+(N-200);
          
      }
      else
      {
           r1=r1+2000;
           r2=r2+(N-2000);
           
      }
   
       printf("%d %d",r1,r2);
       }
   
  }
      //printf("%d",N);}
}