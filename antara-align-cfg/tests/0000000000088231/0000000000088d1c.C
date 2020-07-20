#include <stdio.h>

#define DEBUG 1

typedef long long ll;

#define LL_CHARS 2000

int main(void) {
   int T;
   scanf("%d", &T);

   for (int t = 1; t <= T; ++t) {
      char numstr1[LL_CHARS], numstr2[LL_CHARS];
      scanf("%s", numstr1);

      if (DEBUG) {
         fprintf(stderr, "numstr1=%s\n", numstr1);
      }

      /* split off 4's into numstr2 */
      int i;
      for (i = 0; numstr1[i] != '\0'; ++i) {
         if (numstr1[i] == '4') {
            numstr1[i] = '3';
            numstr2[i] = '1';
         } else {
            numstr2[i] = '0';
         }
      }
      numstr2[i]= '\0'; // null temrinator 

      /* find first non-zero char in numstr2 */
      char *numstr2_begin;
      for (numstr2_begin = numstr2; *numstr2_begin == '0'; ++numstr2_begin) {}
      
      /* print out result */
      printf("Case #%d: %s %s\n", t, numstr1, numstr2_begin);
   }

   return 0;
}
