#include<stdio.h>
void main()
{
int a,b,c,t=1;
while(t<=1)
{
  scanf("%d",&c);
  a=2;b=2;
  c=a+b;
  if(c==4)
  {
      printf("%d %d",&a,&b);
  }
}
}