#include <stdio.h>
#define MAXNUMSIZE 102

char strA[MAXNUMSIZE];
char strB[MAXNUMSIZE];

int intHasFourDigit(char str[]) {
  for(int i = 0; str[i] != '\0'; i++) if (str[i] == '4') return 1;
  return 0;
}

void result(int N) {
  int i, a, b, aux;
  a = N / 2;
  b = !(N % 2) ? (N / 2) : (N / 2 + 1);
  sprintf(strA, "%d", a); sprintf(strB, "%d", b);
  while(intHasFourDigit(strA) || intHasFourDigit(strB)) {
    aux = a / 2;
    b = b + aux + (!(a % 2) ? 0 : 1);
    sprintf(strA, "%d", aux); sprintf(strB, "%d", b);
    a = aux;
  }
  printf("%d %d\n", a, b);
}

int main() {
  int i, count, T, N;

  scanf("%d", &T);
  for(count = 1; count <= T; count++) {
    scanf("%d", &N);
    printf("Case #%d: ", count);
    result(N);
  }
  return 0;
}
