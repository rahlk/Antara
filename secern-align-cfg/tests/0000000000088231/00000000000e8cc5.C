#include<stdio.h>
#include<stdbool.h>
bool four(int x)
{
  while(x!=0)
  {
    if(x%10==4)
      return false;
    x/=10;
  }
  return true;
}
int test(int n)
{
  for(int i=1;i<n;i++)
  {
     if(four(i) && four(n-i))
       return i;
  }
}
void try()
{
  for(int i=0;i<100;i++)
    printf("%d\n",test(944444444-1));
}
int main()
{
  int t;
  scanf("%d",&t);
  for(int i=1;i<=t;i++)
  {
    int n;
    scanf("%d",&n);
    int res=test(n);
    printf("Case #%d: %d %d\n",i,test,n-res);
  }
}
