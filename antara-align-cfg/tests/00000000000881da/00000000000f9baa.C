#include <stdio.h>
#include <stdlib.h>

void changer(char*str,char*new_str,int max)
{
  int i=0,j=0,e=0,s=0;
  while( (*str) != '\n' && (*str) != '\0' && i <1000)
  {
    new_str[i] = *str;
    int kek =0;
    i++;
  }
  i=j;
  while (e < (max-1) && s < (max-1))
  {
    if (e <= (max-1) && str[i] == 'S')
    {
      new_str[j++] = 'E';
      e++;
    }
    else if (s <= (max-1) && str[i] == 'E')
    {
      new_str[j++] = 'S';
      s++;
    }
    i++;
  }
  new_str[(max-1)*2] ='\0';
}
int main()
{
  int test_cases,maze_size,case_i=0;
  char* aux = malloc(sizeof(char)*16);
  char* path = malloc(sizeof(char)*1024);
  fgets(aux,14,stdin);
  test_cases = atoi(aux);
  free(aux);
  while (test_cases > 0)
  {
    aux = malloc(sizeof(char)*16);
    fgets(aux,14,stdin);
    maze_size = atoi(aux);
    free(aux);

    aux = malloc(sizeof(char)*1024);
    fgets(aux,1000,stdin);

    changer(aux,path,maze_size);
    printf("Case #%d: %s\n",case_i+1,path);
    case_i++;

    test_cases--;
  }
  return 0;
}
