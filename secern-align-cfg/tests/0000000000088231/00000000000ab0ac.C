#include<stdio.h>
int main()
{
     int x;
     for(int i=0;i<x;i++)
     {
       int N,a,b,c=0,d=1;
       scanf("%d",&N);
       b=N;
       while(N>0)
       {
           a=N%10;
           if(a==4)
           {a=a-1;}
           c=c+a*d;
           d=d*10;
           N=N/10;
        }
        printf("\n%d %d",c,b-c);
      }
      return 0;
}