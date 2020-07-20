#include<stdio.h>
int main()
{
     int x;
     for(int i=0;i<x;i++)
     {
       int N,n,a,b,d=1;
       scanf("%d",&N);
       b=N;
       n=N;
       while(N>0)
       {
           a=N%10;
           if(a==4)
             b=b-d;
             d=d*10;
           N=N/10;
        }
        printf("\n%d %d",b,n-b);
      }
      return 0;
}