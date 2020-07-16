#include<stdio.h>
void main()
{int T,i,N,p,q=12;
 scanf("%d",&T);
 for(i=0;i<T;i++)
 {scanf("%d",&N);
 if(N<100 && N>9)
 p=N-12;

 else if (N>443&&N<4000)
 p=N-112;
 printf("Case %d:%d %d",i,p,q);
 }

 
 
 
 
 }