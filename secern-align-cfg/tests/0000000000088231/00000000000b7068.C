#include<stdio.h>
void main()
{int T,i,N,p,q;
 scanf("%d",&T);
 for(i=0;i<T;i++)
 {scanf("%d",&N);
 if(N<100 && N>9)
 {p=N-12;q=12;
printf("Case %d:%d %d",i,p,q);}
 else if (N>443&&N<4000)
 {p=N-112;q=112;
 printf("Case %d:%d %d",i,p,q);}
 else { p=1112;q=12;
  printf("Case %d:%d %d",i,p,q);
 }
 }

 
 
 
 
 }