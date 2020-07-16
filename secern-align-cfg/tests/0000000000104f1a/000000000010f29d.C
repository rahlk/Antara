
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s,n,r,a,b,str,stc;
    //printf("Enter Number of Test Cases :: ");
    scanf("%d",&s);
    for(a=0;a<s;a++)
    {
        scanf("%d %d\n",&n ,&r);
        if(n==r){
        printf("Case #1: IMPOSSIBLE\n");
        }
        printf("Case #2: POSSIBLE\n");
    str = n;
    stc = r-n;
    for(a=str;a<n;a++)
{
 for(b=stc;b<r;b++)
 {
  printf("%d %d\n",a,b);
  b++;
  if(b==r)
  {
   b = 1;
  }
 }
}
}
return 0;
}