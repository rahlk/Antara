#include<stdio.h>
int main()
{
  int s;
  scanf("%d",&s);
  while(s--)
  {
  int p,q;
  scanf("%d %d",&p,&q);
  if(p==q)
  {
  printf("IMPOSSIBLE");
  }
    else
    printf("POSSIBLE");
    }
}