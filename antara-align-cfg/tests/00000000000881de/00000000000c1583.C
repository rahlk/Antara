#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char **argv)
{
  int i, j, k, m, n, T, N, B, F;
  int result;
  char str[5][1100];
  char ret[1100];
  char ret_val[1100];
  int  val[1100];
  char s[1100];

  scanf("%d", &T);

  n = 1;
  for(i=0;i<5;i++) {
    for(j=0;j<1024;j++) {
      str[i][j] = ((j / n) % 2) ? '1' : '0';
    }
    n *= 2;
    str[i][1024] = 0;
    /*    printf("%s\n", str[i]);*/
  }

  for(j=0;j<1024;j++) {
    val[j] = 0;
    for(i=0;i<5;i++) {
      val[j] = val[j]*2 + (str[i][j] - '0');
    }
/*     printf("%d ", val[j]); */
  }
/*   printf("\n"); */

#if 1

  for(i=1;i<=T;i++) {
    scanf("%d", &N);
    scanf("%d", &B);
    scanf("%d", &F);

    for(j=0;j<N;j++) {
      ret_val[j] = 0;
    }

    for(j=0;j<5;j++) {
      memcpy(s, str[j], 1100);
      s[N] = 0;
      printf("%s\n", s);
      scanf("%s", ret);
/*       printf("ret = %s\n", ret); */

      for(k=0;k<(N-B);k++) {
	ret_val[k] = ret_val[k]*2 + (ret[k] - '0');
      }
    }

/*     for(k=0;k<N;k++) { */
/*       printf("%d ", val[k]); */
/*     } */
/*     printf("\n"); */

/*     for(k=0;k<(N-B);k++) { */
/*       printf("%d ", ret_val[k]); */
/*     } */
/*     printf("\n"); */

    n = 0;
    m = 0;

    int flag = 0;
    while (n < N) {
      if ((m >= (N-B)) || (ret_val[m] != val[n])) {
	if (flag) {
	  printf(" ");
	}
	printf("%d", n);
	n++;
	flag = 1;
      } else {
	m++;
	n++;
      }
    }
    printf("\n");
    scanf("%d", &result);
    if (result == -1) {
      return 0;
    }
  }

#endif

  return 0;
}
