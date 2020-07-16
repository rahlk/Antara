#include <stdio.h>
#include <string.h>

char l[100];

int main(void) {
  int c, n, i, e, ln;

  scanf("%d", &n);

  for(i=0;i<n;i++){
    scanf("%d", &c);
    scanf("%s", &l[0]);

    printf("Case #%d: ", (i+1));
    
    ln=strlen(l);

    for(e=0;e<ln;e++){

      if(l[e]=='E'){
        printf("S");
      }
      else{
        printf("E");
      }
    }
    printf("\n");
  }
}