#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void func(int t);
int num;

int main()
{
  int t;
  scanf("%d", &t);
  num = t;
  while(t > 0)
  {
    func(t);
    t--;
  }
  return 0;
}
void func(int t)
{
  int  i, n; 
  char a[50000];
  scanf("%d", &n);
 // a = (char * )malloc(sizeof(char) * n);
  scanf("%s", a);
  //printf("%s\n", a);
  for(i = 0; i < strlen(a); i++)
  {
    if(a[i] == 'S')
      a[i] = 'E';
    else
      a[i] = 'S';
  }
  printf("Case #%d: %s\n",num - t + 1, a);
}