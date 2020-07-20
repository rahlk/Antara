#include <stdio.h>

int main() {
  int t, n, t1, i, temp, in =-1, j;
  char a[99999]={0};
  scanf("%d\n", &t);
  t1 = t;
  while (t--) {
      printf("Case #%d: ",t1-t);
    scanf("%d\n", &n);
    temp = (2 * n) - 2;
    for (i = 0; i <temp; i++)
     {
         scanf("%c",&a[i]);
       if(a[i]=='S')
       printf("E");
       else
       printf("S");
     }
    printf("\n");
  }
  return 0;
}