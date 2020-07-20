#include <stdio.h>

int main() {
  int t, n, t1, i, temp, in =-1, j;
  char a[99999]={0};
  scanf("%d\n", &t);
  t1 = t;
  while (t--) {
      printf("Case #%d: ",t1-t);
      in=-1;
    scanf("%d\n", &n);
    temp = (2 * n) - 2;
    for (i = 0; i <temp; i++)
      scanf("%c", &a[i]);

    for (i = 0; i < temp ; i++) {
      if (a[i] != a[i + 1]) {
        j = i + 1;
        for (j = j; j >in; j--) {
            if(a[j]!=0)
             printf("%c", a[j]);
        }
        in = i + 1;
        i++;
      }
    }
    printf("\n");
  }
  return 0;
}