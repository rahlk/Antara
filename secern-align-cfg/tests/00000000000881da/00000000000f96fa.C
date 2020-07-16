#include <stdio.h>

int main() {

  int n, i, j, point1, point2, index,t;
  scanf("%d", &t);
  int ct = 1;
  while (ct <= t) {
    scanf("%d", &n);
    int a[n][n], b[n][n];
    char str[2 * n];
    scanf("%s", str);
    memset(a, 0, sizeof(a[0][0]) * n * n);
    memset(b, 0, sizeof(b[0][0]) * n * n);
    index = 0;
    i = 0,j=0,point1=0,point2=0;
    printf("Case #%d: ", ct);
    while (str[index]) {
      if (a[i][j] == b[point1][point2]) {
        if (str[index] == 'E') {
          j+=1;
          point1+=1;
          a[i][j] = 1;
          b[point1][point2] = 1;
          printf("S");
        } else {
          i++;
          point2+=1;
          a[i][j] = 1;
          b[point1][point2] = 1;
          printf("E");
        }
      }
      index++;
    }
    printf("\n");
    ct++;
  }
  return 0;
}