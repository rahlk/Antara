#include <stdio.h>
typedef long long int lli;

int T;

void rewrite(lli N) {
  lli A, B = 0, C = N, exp = 1;
  while(C) {
    if(C % 10 == 4) B+=exp;
    C/=10;
    exp*=10;
  }
  A = N - B;
  printf("%lld %lld \n", A, B);
}

int main() {
  scanf("%d", &T);
  for(int i = 1; i <= T; i++) {
    lli N;
    scanf("%lld", &N);
    printf("Case #%d: ", i);
    rewrite(N);
  }
}
