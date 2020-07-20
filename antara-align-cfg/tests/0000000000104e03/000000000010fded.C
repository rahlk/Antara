#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,r,c,i,j,str,stc;
    scanf("%d",&t);
    i=0;
	while(i<t)    {
        scanf("%d %d\n",&r ,&c);
        if(r==c){
        printf("Case #1: IMPOSSIBLE\n");
        i++;
        }
        printf("Case #2: POSSIBLE\n");
    str = r;
    stc = c-r;
    i=str;
	while(i<r)
{
 j=stc;
 while(j<c)
 {
  printf("%d %d\n",i,j);
  j++;
  if(j==c)
  {
   j = 1;
  }
  j++;
 }
 i++;
}
}
return 0;
}