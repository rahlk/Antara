#include <stdio.h>
#include <stdlib.h>

void convert(char * ans, char * other, int n){
  int k = 0;
  for(k = 0; k < n; k++){
    if(other[k] == 'S')
        ans[k] = 'E';
    else
        ans[k] = 'S';
  }
}

int main()
{
  int tc, i;
  scanf("%d", &tc);
  for(i = 1; i <= tc; i++){
    int size;
    scanf("%d", &size);

    char *array = malloc(sizeof(char) * (2*size-2));
    scanf("%s", array);

    char *ans = malloc(sizeof(char) * (2*size-2));

    convert(ans, array, 2*size-2);
    printf("Case #%d: %s\n", i, ans);
  }
}