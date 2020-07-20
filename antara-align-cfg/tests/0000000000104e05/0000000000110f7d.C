
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,i,j,x,stc;
    //printf("Enter Number of Test Cases :: ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d\n",&b ,&c);
        if(b==c){
        printf("Case #1: IMPOSSIBLE\n");
        }
        printf("Case #2: POSSIBLE\n");
    x = b;
    stc = c-b;
    for(i=x;i<b;i++)
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