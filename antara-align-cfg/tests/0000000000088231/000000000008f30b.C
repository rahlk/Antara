#include <stdio.h>
int main() {
  int i;
  int n;
  int d;
  int a;
  int A;
  int B;
  
  scanf("%d",&i);
  d = 1;
  n = i;
  A = 0;
  B = 0;
  a = 0;
  
  while (i = i / 10)
    d = d*10;
  printf("%d\n%d\n",n,d);
  
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
    
    printf("a = %d\n",a);
    i = i  - a * d;
    d = d / 10;
  }
  while (d != 0);
  printf("A = %d\n",A);
  printf("B = %d\n",B);
  return 0;
}