#include <stdio.h>
#include <stdlib.h>

int theCondition(char * array, char * ans){
  if(array[0] == ans[0])
    return 1;
  else
    return 0;
}

void convert(char * ans, int n){
  int k = 0;
  for(k = 0; k < 2*n-2; k++){
    if(k > (2*n-2)/2-1){
      ans[k] = 'E';
      continue;
    }
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
    char *array = malloc(sizeof(char) * (2*size)-2);
    scanf("%s", array);
    char *ans = malloc(sizeof(char) * (2*size)-2);
    int j;
    for(j = 0; j < (2*size)-2; j++){
      if(j > (2*size-2)/2-1){
        //      printf("Im here %d\n", j);                                                                                                                                                   
        ans[j] = 'S';
        continue;
      }
      ans[j] = 'E';
    }
    //    printf("%s\n", ans);                                                                                                                                                               
    if(theCondition(array, ans) == 1){
      convert(ans, size);
    }
    printf("Case #%d: %s\n", i, ans);
  }
}