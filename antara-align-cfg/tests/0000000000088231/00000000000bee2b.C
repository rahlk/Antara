#include<stdio.h>
void main()
{
  int N,T,i,c=0,a,b,m,d,g;
  scanf("%d",&T);
  for(i=0;i<T;i++)
  {
     scanf("%d",&N);
     X:
     m=a=rand()%N;
     while(m!=0)
     { g=m%10;
       if(g==4)
       goto X;
       m=m/10;
     }
     d=b=N-a;
            while(d!=0)
        {
             g=d%10;
             if(g==4)
             goto X;
             d=d/10;
        }

  printf("Case #%d: %d %d\n",i+1,a,b);
}
}
