#include<stdio.h>
#include<conio.h>
int main()
{
  int n;
  scanf ("%d", &n);
  while (n--)
{
    int a, b;
    scanf ("%d%d", &a, &b);
    if (b==a+1)
{
    printf ("IMPOSSIBLE");
}
    else
  printf ("POSSIBLE");
}
 }