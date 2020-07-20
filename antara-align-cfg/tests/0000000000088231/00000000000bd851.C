#include<stdio.h>
#include<stdlib.h>
void main()
{
  int n,t,i,c=0,a,b,m,d,g;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
     scanf("%d",&n);
     X:
     m=a=rand()%n;
     while(m!=0)
     { g=m%10;
       if(g==4)
       goto X;
       m=m/10;
     }
     d=b=n-a;
            while(d!=0)
        {
             g=d%10;
             if(g==4)
             goto X;
             d=d/10;
        }

  printf("\n Case #%d: %d %d\n",i+1,a,b);
}
}
