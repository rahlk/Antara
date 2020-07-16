#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void convert(char *other_ans, int n){
  int k	= 0;
  for(k	= 0; k < n; k++){
    if(other_ans[k] == '0')
      other_ans[k] = ' ';
    else
      break;
  }
}


int main()
{
  int tc, i;
  int n;
  scanf("%d", &tc);
  for(i = 1; i <= tc; i++){
    char array[100];
    scanf("%s", array);
    //    printf("Im here %d\n%s\n", i, array);                                       
    char *ans = malloc(sizeof(char) * strlen(array));
    char *other_ans = malloc(sizeof(char) * strlen(array));
    for(int j = 0; j < strlen(array); j++){
      if(array[j] == '4'){
        ans[j] = '3';
        other_ans[j] = '1';
      }else{
        ans[j] = array[j];
        other_ans[j] = '0';
      }
    }
    convert(other_ans, strlen(array));
    printf("Case #%d: %s %s\n", i, ans, other_ans);
  }

}