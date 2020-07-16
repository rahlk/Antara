#include<stdio.h>
int main()
{
    int p,x,y,i,j,stx,sty;
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d %d\n",&x ,&y);
        if(x==y){
        printf("Case #1: IMPOSSIBLE\n");
        }
        else
        
        printf("Case #2: POSSIBLE\n");
    stx = x;
    sty = y-x;
    for(i=stx;i<x;i++)
{
 for(j=sty;j<y;j++)
 {
  printf("%d %d\n",i,j);
  j++;
  if(j==y)
  {
   j = 1;
  }
 }
}
return 0;
}
