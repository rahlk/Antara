#include <stdio.h>
#include <string.h>

void memclear(char *a, char*b, int size) {
  int i;
  for(i = 0; i < size; i++) {
    a[i] = ' ';
    b[i] = ' ';
  }
}

void printStr(char *a, int size) {
  int i = 0, frontZero = 1;
  while(i < size) {
    if(a[i] == '0' && frontZero == 1) {
      i++;
    }
    else {
      frontZero = 0;
      printf("%c", a[i]);
      i++;
    }
  }
  if(frontZero == 1) {
    printf("0");
  }
}

int main() {
  int T, len;
  int i,j;
  char s[102], a[102], b[102];
  scanf("%d\n", &T);
  for(i = 0; i < T; i++) {
    memclear(a, b, 102);
    fgets(s, 102, stdin);
    len = strlen(s);
    // printf("len=%d\n", len);
    for(j = 0; j < len-1 ; j++) {
      if(s[j] == '4') {
        a[j] = '2';
        b[j] = '2';
      }
      else {
        a[j] = s[j];
        b[j] = '0';
      }
    }
    printf("Case #%d: ", i+1);
    printStr(a, len-1);
    printf(" ");
    printStr(b, len-1);
    printf("\n");
  }
  return 0;
}
