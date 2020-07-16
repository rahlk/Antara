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
  char num[100], * temp;
  int i;
  scanf("%s", num);
  temp = (char *)calloc(strlen(num), sizeof(char));
  for(i = 0; i < strlen(num); i++)
  {
    if(num[i] == '4')
      num[i] = num[i] - 1;
    temp[i] = '1';
  } 
  printf("%s %s\n", num, temp);
}