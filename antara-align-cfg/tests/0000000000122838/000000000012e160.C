#include<stdio.h>
#include<stdlib.h>
int main()
{
 int tst;
 scanf("%d",&tst);
 int i;
 i=0;
 while(i<tst)
 {
  int n,k,count,j;
  int c[n],d[k];
  scanf("%d %d",&n,&k);
  for(j=0;j<n;j++)
   scanf("%d",&c[i]);
  for(j=0;j<n;j++)
   scanf("%d",&d[i]);
  count=0;
  int x,y;
  for(x=0;x<n;x++)
  {
   for(y=0;y<n;y++)
   {
    //if((c[x]-d[x]<=k&&c[x]-d[x]>=0)||(d[x]-c[x]<=k&&d[x]-c[x]>=0)||(c[x]-d[y]<=k&&c[x]-d[y]>=0)||(d[x]-c[y]<=k&&d[x]-c[y]>=0))
    if(abs(c[x]-d[x])<=k||abs(d[x]-c[x])<=k||abs(c[x]-d[y])<=k||abs(d[x]-c[y])<=k)
    count++;
   }
  }
  printf("Case #1: %d",count);
  
  i++;
 }
 return 0;
}