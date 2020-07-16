#include<stdio.h>
void main()
{int T,i,N;
 scanf("%d",&T);
 for(i=0;i<T;i++)
 {scanf("%d",&N);
 if(N<100 && N>9)
 printf("Case %d:9 N-11",i);
 if (N>100)
 printf("Case %d:90 N-110",i);
 }

 
 
 
 
 }