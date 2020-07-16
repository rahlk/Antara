#include <stdio.h>
#include<stdlib.h>
int main()
{
 int T,R,C,flag,P;
 int i,j;
 int v,x;
 int *visited;
 scanf("%d",&T);
 P=0;
 while(T--)
 {
 ++P;
 scanf("%d",&R);
 scanf("%d",&C);
 flag=0;
 if(R*C>9)flag=1;
 
if(flag==0) printf("Case #%d: IMPOSSIBLE\n",P);
 else
 {
  printf("Case #%d: POSSIBLE\n",P);
 visited=(int *)malloc((sizeof(int)*R*C)+1);
 i=0;
x=R*C; 
while(i<=(x))
{
visited[i]=0;
++i;
}
 if(flag==1)
 {
 v=0;
 i=3;
 j=C;
 while(1)
 {
 printf("%d %d\n",i,j);
 visited[(i*C)+j]=1;
 i-=2;
 j-=1;
if(visited[(i*C)+j]==1) i+=4;
 ++v;
 if(v==x)break;
 if(i<=0)i=R+i;
 if(j==0)j=C;
 }
 }
 else
 {
 v=0;
 i=R;
 j=3;
 while(1)
 {
 printf("%d %d\n",i,j);
 visited[(i*C)+j]=1;
 i-=1;
 j-=2;
 if(visited[(i*C)+j]==1) j+=4;
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