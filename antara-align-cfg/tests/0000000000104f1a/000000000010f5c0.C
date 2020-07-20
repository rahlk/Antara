#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,r,c,i,j,str,stc;
    //printf("Enter Number of Test Cases :: ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
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
 for(j=stc;j<c;j++)
 {
  printf("%d %d\n",i,j);
  j++;
  if(j==c)
  {
   j = 1;
  }
 }
}
}
return 0;
}