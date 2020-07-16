#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
  int n, cont = 1, i;  

  scanf("%d", &n);
  while(n--) {

    scanf("%d", &i);
    if(i%2)
      printf("Case #%d: %d %d\n", cont++, i/2+1, i/2);
    else
      printf("Case #%d: %d %d\n", cont++, i/2, i/2);
  }

  return 0;
}
