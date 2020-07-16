#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p,r,q,i,j,str,stc;
    //printf("Enter Number of Test Cases :: ");
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d %d\n",&r ,&q);
        if(r==q){
        printf("Case #1: IMPOSSIBLE\n");
        }
        printf("Case #2: POSSIBLE\n");
    str = r;
    stc = q-r;
    for(i=str;i<r;i++)
{
 for(j=stc;j<q;j++)
 {
  printf("%d %d\n",i,j);
  j++;
  if(j==q)
  {
   j = 1;
  }
 }
}
}
return 0;
}