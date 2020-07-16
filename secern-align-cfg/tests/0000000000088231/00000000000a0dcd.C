#include <stdio.h>
int main() {
  int boool, n;
  scanf("%d", & n);
  int count = 1;
  while (n--) {
    int j = 0;
    boool = 0;
    char str[101], str2[101];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
      if (str[i] == '4') {
        str[i] = '2';
        str2[j] = '2';
        boool = 1;
        j++;
      } else {
        if (boool == 1) {
          str2[j] = '0';
          j++;
        }
      }
    }
    str2[j] = '\0';
    printf("Case #%d: %s %s\n", count, str, str2);
    count++;
  }
  return 0;
}