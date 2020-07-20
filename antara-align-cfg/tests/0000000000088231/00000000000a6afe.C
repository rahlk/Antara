#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void func();

int main()
{
  int t;
  scanf("%d", &t);
  while(t > 0)
  {
    func();
    t--;
  }
  return 0;
}
void func()
{
  int * a, * b, flag = 0;
  char num[100], * temp;
  int i;
  scanf("%s", num);
  temp = (char *)calloc(strlen(num), sizeof(char));
  a = (int *)calloc(strlen(num), sizeof(int));
  b = (int *)calloc(strlen(num), sizeof(int));
  for(i = 0; i < strlen(num); i++)
  {
    if(num[i] == '4')
    {
      num[i] = num[i] - 1;
      temp[i] = '1';
    }
    a[i] = num[i] - 48;
    if(temp[i] != 0)
      b[i] = temp[i] - 48;
  }
  //printf("%s %s\n", num, temp);
  for(i = 0;i < strlen(num); i++)
    printf("%d", a[i]);
  printf(" ");
  for(i = 0; i < strlen(num); i++)
  {
    if(b[i] == 1)
      flag = 1;
    if(flag != 0)
      printf("%d", b[i]);
  }
  printf("\n");
}