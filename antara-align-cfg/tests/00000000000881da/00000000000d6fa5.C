#include <stdio.h>
#include <stdlib.h>

int main()
{
  //  FILE *input;                                                              
  //  input = fopen("input.txt", "r+");                                         
  int tc, i;
  scanf("%d", &tc);
  for(i = 1; i <= tc; i++){
    int size;
    scanf("%d", &size);

    char * array = malloc(sizeof(char) * (2*size-2));
    scanf("%s", array);

    char *ans = malloc(sizeof(char) * (2*size-2));
    for(long int k = 0; k < 2*size-2; k++){
      //      printf("%ld\n", k);                                               
      if(array[k] == 'S')
        ans[k] = 'E';
      else
        ans[k] = 'S';
    }

    printf("Case #%d: %s\n", i, ans);
    //    fclose(input);  
    //free(ans);
   // free(array);
  }
}