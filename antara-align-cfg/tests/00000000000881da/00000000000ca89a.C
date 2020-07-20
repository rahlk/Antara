#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tc, i;
  scanf("%d", &tc);
  for(i = 1; i <= tc; i++){
    //size is the length of the grid. it will be size x size squares
    int size;
    scanf("%d", &size);
    //reading the sequence of moves; only north, N, and east, E to 
    char *array = malloc(sizeof(char) * (2*size-2));
    scanf("%s", array);
    //must go from top left to bottom right

    char *ans = malloc(sizeof(char) * (2*size-2));
    
    //converting all N to E and all E to N
    for(long int k = 0; k < 2*size-2; k++){
        if(array[k] == 'S')
            ans[k] = 'E';
        else
            ans[k] = 'S';
    }

    printf("Case #%d: %s\n", i, ans);
    free(array);    
    free(ans);
  }
}