#include <stdio.h>
int main()
{
 int T,R,C,flag,P;
 int i,j;
 int v,x;
 scanf("%d",&T);
 P=0;
 while(T--)
 {
 ++P;
 scanf("%d",&R);
 scanf("%d",&C);
 if(R>C)
 {
  if((R-C)>=2) flag=1;
  else flag=0;
 }
 else
 {
 if((C-R)>=2) flag=2;
 else flag=0;
 }
 if(flag==0) printf("Case #%d: IMPOSSIBLE\n",P);
 else
 {
 if(flag==1)
 {
 printf("Case #%d: POSSIBLE\n",P);
 v=0;
 x=R*C;
 i=3;
 j=C;
 while(1)
 {
 printf("%d %d\n",i,j);
 i-=2;
 j-=1;
 ++v;
 if(v==x)break;
 if(i<=0)i=R+i;
 if(j==0)j=C;
 }
 }
 else
 {
 printf("Case #%d: POSSIBLE\n",P);
 v=0;
 x=R*C;
 i=R;
 j=3;
 while(1)
 {
 printf("%d %d\n",i,j);
 i-=1;
 j-=2;
 ++v;
 if(v==x)break;
 if(i==0)i=R;
 if(j<=0)j=C+j;
 }
 }
 }
}
return 0;
}