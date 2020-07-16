#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cases, N, i, n, p;
    char lydia[100000];
    
    scanf("%d", &cases);
    
    n = 1;
    while (n <= cases) {
          scanf("%d", &N);
          scanf("%s", lydia);

          printf("Case #%d: ", n);
          for(i = 0; i < 2 * (N - 1); i++) {
                if (lydia[i] == 'E') {
                             printf("S");
                }
                else {
                     printf("E");
                }
          }
          printf("\n");
          n++;
    }
        
    return 0;
}
