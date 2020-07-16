#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,r,c,i,k,str,stc;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d\n",&r ,&c);
        if(r==c){
        printf("Case #1: IMPOSSIBLE\n");
        }
        printf("Case #2: POSSIBLE\n");
    str = r;
    stc = c-r;
    for(i=str;i<r;i++)
{
 for(k=stc;k<c;k++)
 {
  printf("%d %d\n",i,k);
  k++;
  if(k==c)
  {
   k = 1;
  }
 }
}
}
return 0;
}