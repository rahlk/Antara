#include<iostream.h>
#include<stdlib.h>


void fun(int T1,int N1)
{cout<<"case #"<<T1<<" ";
 int a,b,r,flag1=0,flag2=0;
 do{a=random(N1-1)+1;
    int n=a;
    while(n>0)
    {r=n%10;
     n=n/10;
     if(r==4) {flag1=0; break;}
     else flag1=1;
     }
    if(flag1==1)
    {b=N1-a;
     int n=b;
     while(n>0)
     {r=n%10;
      n=n/10;
      if(r==4) {flag2=0; break;}
      else flag2=1; }
     }
    }while(flag1==0 || flag2==0);
 cout<<a<<" "<<b<<endl;
 }

void main()
{
 int T,i,Num;
 cin>>T;
 for(i=1;i<=T;i++)
 {cin>>Num;
  fun(i,Num);
  }
}