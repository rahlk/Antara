#include <stdio.h>
#include <stdlib.h>

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
    for(int k = 0; k < 2*size-2; k++){
        if(array[k] == 'S')
            ans[k] = 'E';
        else
            ans[k] = 'S';
    }

    printf("Case #%d: %s\n", i, ans);

  }
}