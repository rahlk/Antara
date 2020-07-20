#include <stdio.h>
int main() {
  int i;
  int n;
  int d;
  int a;
  int A;
  int B;
  int ni;
  int w;
  
  w = 1;
  scanf("%d",&ni);
  while(ni > 0)
  {
    scanf("%d",&i);
  if (i <= 3)
    return 0;
  d = 1;
  n = i;
  A = 0;
  B = 0;
  a = 0;
  
  while (i = i / 10)
    d = d*10;
  
  i = n;
  do
  {
    a = i / d;
    if (a == 4)
    {
      A = A * 10 + 3;
      B = B * 10 + 1;
    }
    else
    {
      A = A * 10 + a;
      B = B * 10;
    }
    i = i  - a * d;
    d = d / 10;
  }
  while (d != 0);
  printf("Case #%d: %d %d\n",w,A,B);
  ni--;
  w++;
  }
  return 0;
}