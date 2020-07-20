#include <stdio.h>

int main(void) {
   int T;
   scanf("%d", &T);

   for (int t = 1; t <= T; ++t) {
      int N;
      scanf("%d", &N);

      char path1[(N - 1) * 2 + 1]; // +1 for '\0'
      char path2[(N - 1) * 2 + 1];
      scanf("%s", path1);

      /* flip 'S' and 'W' */
      char *path1_it, *path2_it;
      for (path1_it = path1, path2_it = path2;
           *path1_it;
           ++path1_it, ++path2_it) {
         *path2_it = 'S' + 'E' - *path1_it;
      }
      *path2_it = '\0';

      /* print out answer */
      printf("Case #%d: %s\n", t, path2);
   }

   return 0;
}
